// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521228847299

#include <stdio.h>

struct point {
  int x;
  int y;
  struct point *next;
};
void printPoints(struct point *start);
int main(void) {
  //! showMemory(start=65520)
  struct point pt1 = {1, 2, NULL};
  struct point *start;
  struct point pt2 = {-2, 3, NULL};
  struct point pt3 = {5, -4, NULL};

  start = &pt1;
  pt1.next = &pt2;
  pt2.next = &pt3;

  printPoints(start);

  return 0;
}

void printPoints(struct point *start) {
  //! showMemory(start = 65520, cursors=[ptr])
  struct point *ptr;
  ptr = start;
  while (ptr != NULL) {
    printf("(%d, %d)\n", ptr->x, ptr->y);
    ptr = ptr->next;
  }
}