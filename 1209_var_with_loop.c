// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1517940977901

#include <stdio.h>

int main(void) {
  int i;
  int numberOfHazelnuts = 0;
  int distanceTraveled = 0;
  for (i = 0; i < 9; i++) {
    printf("At %d miles I have %d hazelnuts.\n", distanceTraveled,
           numberOfHazelnuts);
    distanceTraveled = distanceTraveled + 1;
    numberOfHazelnuts = numberOfHazelnuts + 3;
  }
  return 0;
}