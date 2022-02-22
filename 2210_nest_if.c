// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518542514190

#include <stdio.h>

int main(void) {
  int target;
  int i;
  printf("Please enter a target number: ");
  scanf("%d", &target);
  if (target >= 0) {
    for (i = 0; i < target; i++) {
      if (i % 2) {
        printf("%d ", i);
      }
    }
  } else {
    printf("Nothing to do!\n");
  }
  return 0;
}
