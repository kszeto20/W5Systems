#include <stdio.h>

int main() {

  char c = "k";
  int i = "1";
  long l = 1;
  printf("mem address of char in hexadecimal is:%p\n", &c);
  printf("mem address of int in hexadecimal %p\n", &i);
  printf("mem address of long in hexadecimal %p\n", &l);

  printf("\n------------\n\n");

  printf("mem address of char in decimal is:%lu\n", &c);
  printf("mem address of int in decimal %lu\n", &i);
  printf("mem address of long in decimal %lu\n", &l);

  return 0;
}
