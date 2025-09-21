/**
 * Writing basic programs in C
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Function to generate a segmentation fault error
 * */
int main(int argc, char *argv[]) {
  int *ptr = 0x00;
  *ptr = 10;

  return 0;
}
