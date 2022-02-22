// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1535371689372

#include <stdio.h>

void swap(int *, int *);

int main() {
  //! showMemory(start=65520)
  int a = 9;
  int b = 1;
  swap(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}