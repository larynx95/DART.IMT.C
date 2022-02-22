// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518558796397

#include <stdio.h>

int main(void) {
  int age;
  double height;
  printf("What is your age and height (separate with spaces)?");
  scanf("%d %lf", &age, &height);
  printf("You are %d years old and %.2lf meters tall.", age, height);
  return 0;
}