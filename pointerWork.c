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


   unsigned int uInt = 80;
   int *uIntIP = &uInt;
   char *uIntCP = &uInt;

   printf("p: %p p points to: %d\n", uIntIP, *uIntIP);
   printf("p: %p p points to: %c\n", uIntCP, *uIntCP);

   printf("\n------------\n\n");

   // -------------

   printf("unassigned int in dec: %x\n", uInt);
   printf("unassigned int in hex: %u\n", uInt);

   printf("unassigned int in dec || byte0: %hhu, byte1: %hhu, byte2: %hhu, byte3: %hhu\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));
   printf("unassigned int in hex || byte0: %hhx, byte1: %hhx, byte2: %hhx, byte3: %hhx\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));

   printf("\n------------\n\n");

   // -------------

   int ind;
   for (ind = 0; ind < 4; ind++) {
     *(uIntCP + ind) += 1;
     printf("uInt in Hex: %x || uInt in Dec %u\n", uInt, uInt);
   }

   printf("(HEX) || byte0: %hhx, byte1: %hhx, byte2: %hhx, byte3: %hhx\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));
   printf("(HEX) || byte0: %hhu, byte1: %hhu, byte2: %hhu, byte3: %hhu\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));

   printf("\n------------\n\n");

   // -------------

   for (ind= 0; ind< 4; ind++) {
     *(uIntCP + ind) += 16;
     printf("uInt in Hex: %x || uInt in Dec %u\n", uInt, uInt);
   }

   printf("(HEX) || byte0: %hhx, byte1: %hhx, byte2: %hhx, byte3: %hhx\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));
   printf("(HEX) || byte0: %hhu, byte1: %hhu, byte2: %hhu, byte3: %hhu\n", *uIntCP, *(uIntCP + 1), *(uIntCP + 2), *(uIntCP + 3));

  return 0;
}
