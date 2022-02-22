// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518558220427

#include <stdio.h>

int main(void) {
  int age;
  double height;
  printf("What is your age?");
  scanf("%d", &age);
  printf("What is your height?");
  scanf("%lf", &height);
  printf("You are %d years old and %.2lf meters tall.", age, height);
  return 0;
}