/**
 * Writing basic programs in C
 *
 * Michael Tenkorang Ofori
 * September 3rd, 2025
 */


#include <stdlib.h>
#include <stdio.h>

/*
 * Function to determine the memory layout of structs
 * */
int main(int argc, char *argv[]) {

  // struct for char, int, short int (4.1)
  /*
  typedef struct {
    char test_char;
    int test_int;
    short int test_short_int;
  } TestStruct;
  */

  // struct for int, char, short int (4.2)
  /*
  typedef struct TestStruct {
    int test_int;
    char test_char;
    short int test_short_int;
  } TestStruct;
  */

  // struct for short int, char, int (4.3)
  typedef struct {
    short int test_short_int;
    char test_char;
    int test_int;
  } TestStruct;

  // allocating a block of memory for my struct 
  TestStruct *my_struct = (TestStruct *) malloc(sizeof(TestStruct));

  // initializing values for the fields in the struct
  my_struct->test_char = 'a';
  my_struct->test_int = 13;
  my_struct->test_short_int = 32;

  // initilizing my ptr at the start of the struct
  unsigned char *ptr = (unsigned char *) my_struct;
  for (int i = 0; i < sizeof(TestStruct); i++) {
    printf("%02X\n", ptr[i]);
  }
  return 0;
}
