// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521476692772

#include <stdio.h>
#include <stdlib.h>

struct digit {
  int num;
  struct digit *next;
};

struct digit *createDigit(int);
struct digit *append(struct digit *end, struct digit *newDigptr);
void printNumber(struct digit *start);

int main(void) {
  //! stack = showMemory(start=65520)
  struct digit *start, *newDigptr, *end, *tmp;
  int first = 5;
  int second = 3;
  int third = 7;
  start = createDigit(first);
  end = start;
  newDigptr = createDigit(second);
  end = append(end, newDigptr);
  newDigptr = createDigit(third);
  end = append(end, newDigptr);
  printNumber(start);

  /* free heap memory */
  tmp = start->next;
  free(start);
  start = tmp;
  tmp = start->next;
  free(start);
  free(tmp);
  return 0;
}

struct digit *createDigit(int dig) {
  struct digit *ptr;
  ptr = (struct digit *)malloc(sizeof(struct digit));
  ptr->num = dig;
  ptr->next = NULL;
  return ptr;
}

struct digit *append(struct digit *end, struct digit *newDigptr) {
  end->next = newDigptr;
  return (end->next);
}

void printNumber(struct digit *start) {
  //! heap=showMemory(start=277, cursors=[ptr,start])
  struct digit *ptr = start;
  while (ptr != NULL) {
    printf("%d", ptr->num);
    ptr = ptr->next;
  }
  printf("\n");
}