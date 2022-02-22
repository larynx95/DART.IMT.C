// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518462878684

#include <stdio.h>

int main(void) {
  int i;
  // i++ is short for i = i+1
  for (i = 3; i > 0; i = i - 1) {
    printf("i has the value %d.\n", i);
  }
  return 0;
}