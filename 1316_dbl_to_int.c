// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518207426754

#include <stdio.h>

int main(void) {
  double dOne, dTwo;
  int iOne, iTwo;
  printf("Please enter two decimals: ");
  scanf("%lf %lf", &dOne, &dTwo);
  printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
  iOne = (int)dOne;
  iTwo = (int)dTwo;
  printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
  printf("%d / %d = %d.\n", iOne, iTwo, iOne / iTwo);
  return 0;
}