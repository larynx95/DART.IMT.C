// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518646143902

#include <stdio.h>

int main(void) {
  int iOne;
  int iTwo;
  double dOne;
  printf("Please enter two integers: ");
  scanf("%d %d", &iOne, &iTwo);
  dOne = (double)iOne;
  printf("dOne/iTwo equals %lf\n", dOne / iTwo);
  return 0;
}