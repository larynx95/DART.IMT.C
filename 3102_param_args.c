// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1533648071825

#include <stdio.h>

int sum(int x, int y) {  // PARAMETERS
  int compute;
  printf("Starting the computation!\n");
  compute = x + y;
  printf("Finished the computation successfully!\n");
  return compute;
}

int main(void) {
  int a, b;
  int result;
  printf("Please enter two integers: ");
  scanf("%d%d", &a, &b);
  printf("You entered %d and %d.\n", a, b);
  result = sum(a, b);  // ARGUMENTS
  printf("Result of the sum = %d.\n", result);
  return 0;
}

/*

parameter: A parameter is the variable which is part of the method’s signature
(method declaration).

argument: An argument is an expression used when calling the method.

*/