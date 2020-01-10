%global apiversion 0.1

Name: libabw
Version: 0.1.1
Release: 2%{?dist}
Summary: A library for import of AbiWord files

License: MPLv2.0
URL: https://wiki.documentfoundation.org/DLP/Libraries/libabw
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: boost-devel
BuildRequires: doxygen
BuildRequires: gperf
BuildRequires: help2man
BuildRequires: pkgconfig(librevenge-0.0)
BuildRequires: pkgconfig(libxml-2.0)

Patch0: 0001-coverity-1259904-dereference-before-null-check.patch
Patch1: 0001-coverity-1259905-do-not-let-AbiDocument-parse-throw.patch

%description
%{name} is a library for import of AbiWord files.

%package devel
Summary: Development files for %{name}
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform AbiWord files into other formats
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform AbiWord files into other formats. Currently
supported: XHTML, raw, text.

%prep
%autosetup -p1

%build
%configure --disable-silent-rules --disable-static --disable-werror
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

export LD_LIBRARY_PATH=`pwd`/src/lib/.libs${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
help2man -N -n 'debug the conversion library' -o abw2raw.1 ./src/conv/raw/.libs/abw2raw
help2man -N -n 'convert AbiWord document into HTML' -o abw2html.1 ./src/conv/html/.libs/abw2html
help2man -N -n 'convert AbiWord document into plain text' -o abw2text.1 ./src/conv/text/.libs/abw2text

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

mkdir -p %{buildroot}/%{_mandir}/man1
install -m 0644 abw2*.1 %{buildroot}/%{_mandir}/man1

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%doc CREDITS COPYING.MPL README
%{_libdir}/%{name}-%{apiversion}.so.*

%files devel
%doc ChangeLog
%{_includedir}/%{name}-%{apiversion}
%{_libdir}/%{name}-%{apiversion}.so
%{_libdir}/pkgconfig/%{name}-%{apiversion}.pc

%files doc
%doc COPYING.MPL
%doc docs/doxygen/html

%files tools
%{_bindir}/abw2raw
%{_bindir}/abw2text
%{_bindir}/abw2html
%{_mandir}/man1/abw2raw.1*
%{_mandir}/man1/abw2text.1*
%{_mandir}/man1/abw2html.1*

%changelog
* Mon May 04 2015 David Tardon <dtardon@redhat.com> - 0.1.1-2
- Related: rhbz#1207749 fix two potential crashes

* Fri Apr 17 2015 David Tardon <dtardon@redhat.com> - 0.1.1-1
- Resolves: rhbz#1207749 rebase to 0.1.1

* Mon Feb 10 2014 David Tardon <dtardon@redhat.com> - 0.0.2-1
- new upstream release 0.0.2
- generate man pages for the tools

* Wed Jan 15 2014 David Tardon <dtardon@redhat.com> - 0.0.1-1
- new upstream release

* Mon Jan 13 2014 David Tardon <dtardon@redhat.com> - 0.0.0-1
- initial import
