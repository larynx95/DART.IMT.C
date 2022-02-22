// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518454334027

#include <stdio.h>

int main(void) {
  // + - * / % : arithmetic operators
  // < > <= >= != == : comparison operators
  int a = 5;
  int b = 2;
  int result;
  printf("Check: Is a == b?\n");
  result = a == b;
  printf("Result is %d.\n", result);
  if (result) {
    printf("TRUE!\n");
  } else {
    printf("FALSE!\n");
  }
  return 0;
}
