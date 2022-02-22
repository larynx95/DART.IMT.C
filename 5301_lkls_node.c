// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521472234670

#include <stdio.h>
#include <stdlib.h>

struct digit {
  int num;
  struct digit *next;
};

struct digit *createDigit(int dig);

int main(void) {
  //! stack=showMemory(start=65520, showcursor[numberptr])
  struct digit *numberptr;
  int digitToStore = 5;
  numberptr = createDigit(digitToStore);
  printf(
      "We are storing the digit %d and the pointer %p at memory location %p.\n",
      numberptr->num, numberptr->next, numberptr);
  free(numberptr);
  return 0;
}

struct digit *createDigit(int dig) {
  //! heap=showMemory(start=330, cursors=[ptr])
  struct digit *ptr;
  ptr = (struct digit *)malloc(sizeof(struct digit));
  ptr->num = dig;
  ptr->next = NULL;
  return ptr;
}