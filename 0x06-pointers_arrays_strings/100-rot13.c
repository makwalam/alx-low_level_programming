#include <stdlib.h>

char *rot13(char *str) {
  char *ptr = str;
  char c;

  while ((c = *ptr) != '\0') {
    if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
      *ptr += 13;
    else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
      *ptr -= 13;

    ptr++;
  }

  return str;
}

