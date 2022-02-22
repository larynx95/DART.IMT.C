// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518642783744

#include <stdio.h>

int main(void) {
  int intFive = 5;
  int intTwo = 2;
  double doubFive = 5.0;
  double doubTwo = 2.0;
  printf("intFive/intTwo equals %d\n", intFive / intTwo);
  printf("doubFive/doubTwo equals %lf\n", doubFive / doubTwo);
  printf("doubFive/intTwo equals %lf\n", doubFive / intTwo);
  printf("intFive/doubTwo equals %lf\n", intFive / doubTwo);
  return 0;
}