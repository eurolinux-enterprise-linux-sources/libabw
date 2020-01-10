/* C++ code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf --compare-strncmp -C -m 20 ../../src/lib/tokens.gperf  */
/* Computed positions: -k'1-2' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 5 "../../src/lib/tokens.gperf"
struct xmltoken
{
  const char *name;
  int tokenId;
};

#define TOTAL_KEYWORDS 33
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 12
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 33
/* maximum key range = 33, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct xmltoken *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
Perfect_Hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34,  1,  0, 14,
      27,  3,  5, 21, 23,  0, 34, 34, 26,  8,
      19, 17,  2, 34,  2,  6, 12, 34, 12, 18,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
      34, 34, 34, 34, 34, 34
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct xmltoken wordlist[] =
  {
    {(char*)0, 0},
#line 27 "../../src/lib/tokens.gperf"
    {"i",XML_I},
#line 11 "../../src/lib/tokens.gperf"
    {"a",XML_A},
#line 35 "../../src/lib/tokens.gperf"
    {"p",XML_P},
#line 15 "../../src/lib/tokens.gperf"
    {"br",XML_BR},
#line 37 "../../src/lib/tokens.gperf"
    {"pbr",XML_PBR},
#line 22 "../../src/lib/tokens.gperf"
    {"f",XML_F},
#line 39 "../../src/lib/tokens.gperf"
    {"s",XML_S},
#line 12 "../../src/lib/tokens.gperf"
    {"abiword",XML_ABIWORD},
#line 33 "../../src/lib/tokens.gperf"
    {"m",XML_M},
#line 23 "../../src/lib/tokens.gperf"
    {"field",XML_FIELD},
#line 36 "../../src/lib/tokens.gperf"
    {"pagesize",XML_PAGESIZE},
#line 25 "../../src/lib/tokens.gperf"
    {"frame",XML_FRAME},
#line 29 "../../src/lib/tokens.gperf"
    {"image",XML_IMAGE},
#line 38 "../../src/lib/tokens.gperf"
    {"revisions",XML_REVISIONS},
#line 16 "../../src/lib/tokens.gperf"
    {"c",XML_C},
#line 40 "../../src/lib/tokens.gperf"
    {"section",XML_SECTION},
#line 17 "../../src/lib/tokens.gperf"
    {"cbr",XML_CBR},
#line 42 "../../src/lib/tokens.gperf"
    {"table",XML_TABLE},
#line 34 "../../src/lib/tokens.gperf"
    {"metadata",XML_METADATA},
#line 30 "../../src/lib/tokens.gperf"
    {"iw",XML_IW},
#line 18 "../../src/lib/tokens.gperf"
    {"cell",XML_CELL},
#line 43 "../../src/lib/tokens.gperf"
    {"version",XML_VERSION},
#line 13 "../../src/lib/tokens.gperf"
    {"awml",XML_AWML},
#line 41 "../../src/lib/tokens.gperf"
    {"styles",XML_STYLES},
#line 14 "../../src/lib/tokens.gperf"
    {"bookmark",XML_BOOKMARK},
#line 24 "../../src/lib/tokens.gperf"
    {"foot",XML_FOOT},
#line 31 "../../src/lib/tokens.gperf"
    {"l",XML_L},
#line 19 "../../src/lib/tokens.gperf"
    {"d",XML_D},
#line 21 "../../src/lib/tokens.gperf"
    {"endnote",XML_ENDNOTE},
#line 26 "../../src/lib/tokens.gperf"
    {"history",XML_HISTORY},
#line 32 "../../src/lib/tokens.gperf"
    {"lists",XML_LISTS},
#line 20 "../../src/lib/tokens.gperf"
    {"data",XML_DATA},
#line 28 "../../src/lib/tokens.gperf"
    {"ignoredwords",XML_IGNOREDWORDS}
  };

const struct xmltoken *
Perfect_Hash::in_word_set (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && *str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
#line 44 "../../src/lib/tokens.gperf"

