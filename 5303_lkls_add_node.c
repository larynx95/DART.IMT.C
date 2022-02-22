// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521475389947

/* include library */
#include <stdio.h>
#include <stdlib.h>

/* structure */
struct digit {
  int num;             // primitive data type, not Char-Array
  struct digit *next;  // pointer pointing next node
};

/* function prototype */
struct digit *createDigit(int dig);
struct digit *append(struct digit *end, struct digit *newDigitptr);

/* main function */
int main(void) {
  //! stack=showMemory(start=65520,cursors=[start,newDigitptr,end,tmp])

  // declare variables, pointers
  // All this variables and pointer are pointing memory spaces in stack,
  // NOT heap
  struct digit *start, *end, *newDigitptr, *tmp;
  int first = 5;
  int second = 3;
  int third = 7;

  /* initialize the first node */

  start = createDigit(first);
  end = start;
  // Let's explain this.
  // the memory address of pointer `start` itself is in the stack memory
  // but POINTING memory address in heap
  // where struct digit node exist
  // Both pointer start and end are pointing heap address

  /* initialize another node and append it to the last node*/

  newDigitptr = createDigit(second);
  end = append(end, newDigitptr);
  // Let's explain this.
  // the memory address of pointer `newDigitptr` itself is in the stack memory
  // but POINTING memory address in heap
  // where struct digit node exist
  // AND
  // the value of pointer `next` in the first node is modified
  // from NULL to the address of new struct digit node
  // (the value of the pointer `newDigitptr`)
  // AND
  // pointer `end` and `newDigitptr` is pointing the same address
  // in heap memory now

  /* initialize another node and append it to the last node */

  newDigitptr = createDigit(third);  // initialize a new node
  end = append(end, newDigitptr);    // append it to the end of the first node

  /* free needs to be added  here */

  // TODO: what should we do now? Free heap memory! But how?
  // We now have three heap-memory addresses.
  // the first, second, third struct digit nodes themselves

  // Firstly, free the heap memory of the first node
  // But `free(start);` will break the linkage bw the first and second node
  // Without using `tmp`, you can't find other nodes any more.
  tmp = start->next;  // prepare to move the pointer `start`
  free(start);        // free the heap memory which store the first node
  start = tmp;        // now, the pointer `start` is pointing the second node
  tmp = start->next;  // prepare to move the pointer `start` again
  // Now, pointer `start` is pointing the second node
  // and pointer `tmp` is poiniting the third node
  free(start);
  free(tmp);

  return 0;
}

/* function definitions */
struct digit *append(struct digit *end, struct digit *newDigitptr) {
  //! heap=showMemory(start=260, cursors=[end,newDigitptr])
  end->next = newDigitptr;  // linking
  end = newDigitptr;        // create new end
  return (end);
}

struct digit *createDigit(int dig) {
  //! heap=showMemory(start=260, cursors=[ptr])
  // monomory allocation
  struct digit *ptr;
  ptr = (struct digit *)malloc(sizeof(struct digit));

  ptr->num = dig;    // assign int data
  ptr->next = NULL;  // last node the last, no next node
  return ptr;
}