#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  typedef struct {
    char test_char;
    int test_int;
    short int test_short_int;
  } TestStruct;

  TestStruct *my_struct = (TestStruct *) malloc(sizeof(TestStruct));
  my_struct->test_char = 'a';
  my_struct->test_int = 13;
  my_struct->test_short_int = 32;

  unsigned char *ptr = (unsigned char *) my_struct;
  for (int i = 0; i < sizeof(TestStruct); i++) {
    printf("%02X\n", ptr[i]);
  }
  return 0;
}
