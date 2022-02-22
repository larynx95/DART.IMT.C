// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518828494441

#include <stdio.h>

int main(void) {
  int age;
  printf("What is your age?\n");
  scanf("%d", &age);
  if (age >= 18 && !(age >= 65)) {
    printf("You are in the labor force\n");
  } else {
    printf("You are not in the labor force\n");
  }
  return 0;
}
