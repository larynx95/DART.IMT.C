// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1519761533852

#include <stdio.h>

int main(void) {
  double array[3];
  double readValue = 0.0;
  int cellNumber = 0;
  int i = 0;
  for (i = 0; i < 3; i++) {
    printf("Enter a decimal value:");
    scanf("%lf", &readValue);
    array[cellNumber] = readValue;
    printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
    cellNumber = cellNumber + 1;
  }
  return 0;
}