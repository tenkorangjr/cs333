#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  while (1) {
    unsigned char *ptr = (unsigned char *) malloc(sizeof(char));
    free(ptr);
  }


  return 0;
}
