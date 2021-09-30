#include <stdio.h>

int main() {

  char c = "k";
  int i = 1;
  long l = 1;
  printf("mem address of char in hexadecimal is:%p\n", &c);
  printf("mem address of int in hexadecimal %p\n", &i);
  printf("mem address of long in hexadecimal %p\n", &l);

  printf("\n---\n\n");

  printf("mem address of char in decimal is:%lu\n", &c);
  printf("mem address of int in decimal %lu\n", &i);
  printf("mem address of long in decimal %lu\n", &l);

  printf("\n------------\n\n");

  // -------------

  char *cPointer = &c;
  int *iPointer = &i;
  long *lPointer = &l;

  printf("pointer for char: %p\n", cPointer);
  printf("pointer for int: %p\n", iPointer);
  printf("pointer for long: %p\n", lPointer);

  printf("\n---\n\n");

  *cPointer = 's';
  *iPointer += 1;
  *lPointer = 2;

  printf("new val for char: %c\n", c);
  printf("new val for int: %d\n", i);
  printf("new val for long: %ld\n", l);

  printf("\n------------\n\n");

  // -------------

  return 0;
}
