// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1511291223919_v6

#include <stdio.h>

int main() {
  double num = 0.3;
  float fnum = 0.3;
  float fnum2 = 0.25;

  printf("the number is %.40lf\n", num);
  printf("the number is %.40f\n", fnum);   // more inaccurate
  printf("the number is %.40f\n", fnum2);  // just the number, 0.25

  return (0);
}