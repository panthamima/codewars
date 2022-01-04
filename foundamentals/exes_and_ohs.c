// Check to see if a string has the same amount 
// of 'x's and 'o's. The method must return a boolean
// and be case insensitive. The string can contain
// any char.

//solution
#include <stdbool.h>

bool xo (const char* str)
{
  unsigned x = 0, o = 0;
  for (char *p = str; *p; p++) {
      if      (tolower(*p)=='x') x++;
      else if (tolower(*p)=='o') o++;
  }
  return x == o;
}