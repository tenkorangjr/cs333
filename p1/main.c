/**
 * Writing basic programs in C
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char my_char = 'a';
  short int my_short = 10;
  int my_int = -15;
  long int my_long = 100000000000;
  float my_float = 2.5;
  double my_double = 2.25;

  //printf("my_char: %c, my_short: %d, my_int: %d, my_long: %ld, my_float: %f, my_double: %f", my_char, my_short, my_int, my_long, my_float, my_double);

  unsigned char *ptr;
  ptr = (unsigned char *)&(my_char);

  printf("Char: \n");
  for (int i = 0; i < sizeof(char); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  ptr = (unsigned char *)&(my_short);
  printf("Short: \n");
  for (int i = 0; i < sizeof(short int); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  ptr = (unsigned char *)&(my_int);
  printf("Int:\n");
  for (int i = 0; i < sizeof(int); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  ptr = (unsigned char *)&(my_long);
  printf("Long:\n");
  for (int i = 0; i < sizeof(long int); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  ptr = (unsigned char *)&(my_float);
  printf("Float:\n");
  for (int i = 0; i < sizeof(float); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  ptr = (unsigned char *)&(my_double);
  printf("Double:\n");
  for (int i = 0; i < sizeof(double); i++) {
    printf("%d: %02X\n", i, ptr[i]);
  }

  return 0;
}
