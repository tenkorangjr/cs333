/**
 * Writing basic programs in C
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */

#include <stdlib.h>
#include <stdio.h>

/*
 *Function to determine the overall layout of the stack
 * */
int main(int argc, char* argv[]) {

  // Initializing varaiables
  short int var_1 = 10; // Should look like 0A 00
  short int var_2 = 15; // should look like 0F 00
  short int var_4 = 32; // should look like 20 00
  short int var_5 = 64; // should look like 40 00

  // Setting ptr to point to its own address 
  unsigned char *ptr = (unsigned char *)&ptr;

  for (int i = 0; i < 100; i++) {
    printf("i: %d value: %02X\n", i, ptr[i]);
  }

  return 0;
}
