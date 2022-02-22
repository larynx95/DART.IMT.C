// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518795750437

#include <stdio.h>

int sum(int x, int y) {
  int compute;
  printf("Starting the computation!\n");
  compute = x + y;
  printf("Finished the computation successfully!\n");
  return compute;
}

int main(void) {
  int a, b;
  int result;
  printf("Please enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("You entered %d and %d.\n", a, b);
  result = sum(a, b);
  printf("Result of the sum = %d.\n", result);
  return 0;
}