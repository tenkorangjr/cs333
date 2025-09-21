#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  while (1) {
    // allocating 1 byte of memory
    unsigned char *ptr = (unsigned char *) malloc(sizeof(char));
    // free the allocated memory
    free(ptr);
  }


  return 0;
}
