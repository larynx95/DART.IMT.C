// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1511374873516

#include <stdio.h>

int main() {
  //! showMemory(start=65520)
  int num = 2147483645;
  int i;

  for (i = 0; i < 8; i++) {
    printf("%d\n", num);
    num = num + 1;
  }

  return (0);
}

// binary two's complement representation