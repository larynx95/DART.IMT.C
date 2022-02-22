// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518452870744

#include <stdio.h>

int main(void) {
  // if it is true then do this
  // if it is not true, then do not do this
  // FALSE 0 0.0
  // TRUE all vallues that are non-zero (positive or negative)
  int weatherIsGood = 99;  // the weather is good!
  if (weatherIsGood) {
    printf("The weather is good!\n");
    printf("I can go outside! Yeah!\n");
  }
  return 0;
}
