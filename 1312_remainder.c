// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1517948554914

#include <stdio.h>

int main(void) {
  // pay 166 dollars using 20-dollar bills, rest with 1-dollar bills
  int twenties = 166 / 20;
  int rest = 166 % 20;
  printf("I will pay %d dollars with 20-dollar bills.\n", twenties * 20);
  printf("I will then pay %d dollars with 1-dollar bills.\n", rest);
  return 0;
}