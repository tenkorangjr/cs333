/**
 * Basic C program to determine effect of not deallocating memory
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * Function to allocate and deallocate memory on the heap
 * */
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
