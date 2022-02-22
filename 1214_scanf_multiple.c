// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518465845516

#include <stdio.h>

int main() {
  int howMany = 0;
  int sum = 0;
  int numberRead = 0;
  printf("How many items do you want to add?\n");
  scanf("%d", &howMany);
  for (int i = 0; i < howMany; i++) {
    scanf("%d", &numberRead);
    printf("I have read %d from the input terminal\n", numberRead);
    sum = sum + numberRead;
    printf("sum equals %d\n", sum);
  }
  return 0;
}