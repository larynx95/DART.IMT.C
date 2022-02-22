// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518820796663

#include <stdio.h>

int main(void) {
  // + - * / % : arithmetic operations
  // <  >  <=  >=  !=  ==  :  comparison operations
  double a = 5.0000000000000000001;
  double b = 5.0000000000000000000;
  int result;
  printf("Check: Is a == b ?\n");  // Check: Is a == b ?
  result = a == b;
  printf("result is %d\n", result);  // result is 1
  if (result) {
    printf("TRUE\n");  // TRUE
  } else {
    printf("FALSE\n");
  }
  return 0;
}