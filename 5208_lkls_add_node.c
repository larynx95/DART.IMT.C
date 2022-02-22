// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521230782513

#include <stdio.h>

struct point {
  int x;
  int y;
  struct point *next;
};

void printPoints(struct point *start);
void append(struct point *end, struct point *newpt);

int main(void) {
  //! showMemory(start=65520)
  struct point pt1 = {1, 2, NULL};
  struct point pt2 = {-2, 3, NULL};
  struct point pt3 = {5, -4, NULL};
  struct point *start;

  start = &pt1;
  append(&pt1, &pt2);
  append(&pt2, &pt3);

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

void append(struct point *end, struct point *newpt) {
  // link a pointer of a node to another node
  end->next = newpt;
}