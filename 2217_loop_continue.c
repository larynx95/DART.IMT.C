// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518546503005

#include <stdio.h>

int main(void) {
  int signaturesNeeded = 1000;
  int day = 0;
  int newSignatures = 3;
  int totalSignatures = 3;
  while (totalSignatures < 1000) {
    day++;
    newSignatures = 2 * newSignatures;
    printf("Day %d: %d new signatures! ", day, newSignatures);
    totalSignatures = totalSignatures + newSignatures;
    printf("Total: %d\n", totalSignatures);
  }
  return 0;
}