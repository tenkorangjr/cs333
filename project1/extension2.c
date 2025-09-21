/**
 * Writing basic programs in C
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */

#include <stdlib.h>
#include <stdio.h>

/*
 * Function to generate a buffer overread runtime error
 * */
int main(int argc, char *argv[]) {

  int *arr = (int *) malloc(2*sizeof(int));
  arr[0] = 10;
  arr[1] = 20;

  for (int i = 0; i < 10; i++) {
    printf("Address: %p, Value: %d\n", arr + i, arr[i]);
  }

  return 0;
}
