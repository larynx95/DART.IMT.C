// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1519141173714

#include <stdio.h>

int main(void) {
  //! showMemory(start=65520)
  int i = 42;
  int* iAdr;
  double a = 3.14;
  double* aAdr = &a;
  char c = 'p';
  char* cAdr = &c;
  iAdr = &i;  // alternatively int * iAdr = &i;
  printf("Address of i is %p and i = %d.\n", iAdr, *iAdr);
  printf("Address of a is %p and a = %lf.\n", aAdr, *aAdr);
  printf("Address of c is %p and c = %c.\n", cAdr, *cAdr);
  *iAdr = 50;
  printf("Address of i is %p and i = %d.\n", iAdr, i);
  *aAdr = 2.1718;
  printf("Address of a is %p and a = %lf.\n", aAdr, a);
  *cAdr = 'B';
  printf("Address of c is %p and c = %c.\n", cAdr, c);

  return (0);
}

/*

dereferencing: point가 가리키는 값을 내놓는 것. 쉽게 말해서.

*/
