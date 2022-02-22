// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1519923859049

#include <stdio.h>

int main(void) {
  int diceValue = 0;
  int nbThrows = 0;
  scanf("%d", &diceValue);
  while (diceValue != 6) {
    scanf("%d", &diceValue);
    nbThrows = nbThrows + 1;
  }
  printf("We needed %d throws to get the value 6\n", nbThrows + 1);
  return 0;
}