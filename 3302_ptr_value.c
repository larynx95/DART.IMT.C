// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1535113673880

#include <stdio.h>

int main() {
  //! showMemory(start=65520)
  double a = 42.98;
  double* addressOfA = &a;
  printf("At the address %p there is the value %.2lf\n", addressOfA,
         *addressOfA);
  char c = 'm';
  char* addressOfC = &c;
  char d = *addressOfC;
  *addressOfA = 32;
  *addressOfA = *addressOfA + 1;
  printf("At the address %p there is the value %.2lf\n", addressOfA,
         *addressOfA);
  return 0;
}