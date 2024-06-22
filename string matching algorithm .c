#include <stdio.h>

void naive_string_matching(char *text, char *pattern) {
  int i, j;
  for (i = 0; text[i] != '\0'; i++) {
    for (j = 0; pattern[j] != '\0' && text[i + j] != '\0'; j++) {
      if (text[i + j] != pattern[j]) {
        break;
      }
    }
    if (pattern[j] == '\0') {
      printf("Pattern found at index %d\n", i);
    }
  }
}

int main() {
  char text[] = "This is a sample text";
  char pattern[] = "sample";

  naive_string_matching(text, pattern);

  return 0;
}

