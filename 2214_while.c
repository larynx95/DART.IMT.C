// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518544519771

#include <stdio.h>

int main(void) {
  int diceValue;
  int notSix;
  scanf("%d", &diceValue);
  notSix = diceValue != 6;
  while (notSix) {
    scanf("%d", &diceValue);
    notSix = diceValue != 6;
  }
  return 0;
}