// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518205819816

#include <stdio.h>

int main(void) {
  char letter, letter2;
  printf("Please enter two letters separated by a comma: ");
  scanf("%c,%c", &letter, &letter2);
  printf("I read the letters %c and %c.\n", letter, letter2);
  return 0;
}