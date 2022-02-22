// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1519922545644

#include <stdio.h>

int main(void) {
  int nbThrows = 0;
  int nbDice = 0;
  int diceValue = 0;
  int throwSum = 0;
  int throw = 0;
  int dice = 0;
  scanf("%d %d", &nbThrows, &nbDice);
  for (throw = 0; throw < nbThrows; throw ++) {
    for (dice = 0; dice < nbDice; dice++) {
      scanf("%d", &diceValue);
      throwSum = throwSum + diceValue;
    }
    printf("throw %d sum equals %d\n", throw, throwSum);
    throwSum = 0;
  }
  return 0;
}