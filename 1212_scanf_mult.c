// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518633303037

#include <stdio.h>

int main(void) {
  int first, second, third;
  printf("Please enter three integers, separated by commas: ");
  scanf("%d,%d,%d", &first, &second, &third);
  printf("You entered: %d for first, %d for second, %d for third.\n", first,
         second, third);

  return 0;
}
