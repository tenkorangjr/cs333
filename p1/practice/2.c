#include <stdio.h>


int main() {

  // whenever you create a string in C, in the memory, there's actually another character '\0' which signals the end of the string

  char s[] = "C Language";

  int counter = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    counter++;
  }

  for (counter >= 0; counter--) {
    printf("%c", s[counter]);
  }

  return 0;
}
