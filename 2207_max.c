// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518539100661

#include <stdio.h>

int main(void) {
  //! showArray(ages, cursors=[i])
  int ages[10];
  int i;
  int ageMax = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d", &ages[i]);
    if (ages[i] > ageMax) {
      ageMax = ages[i];
    }
  }
  printf("The maximum age is %d.\n", ageMax);
  return 0;
}
