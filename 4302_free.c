// https://codecast.france-ioi.org/v6/player?base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1522245743723

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //! showMemory(start=438, cursors=[a,b,c])
  int *a, *b, *c;
  a = (int *)malloc(sizeof(int));
  *a = 1;
  printf("I stored %d at memory location %p.\n", *a, a);
  b = (int *)malloc(sizeof(int));
  *b = 2;
  free(a);
  c = (int *)malloc(sizeof(int));
  *c = 3;
  printf("Can I still access a?\n");
  printf("I stored %d at memory location %p.\n", *a, a);
  free(b);
  free(c);
  return 0;
}