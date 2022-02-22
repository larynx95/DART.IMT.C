// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521216766142

#include <stdio.h>
struct point {
  int x;
  int y;
};
void printPoint(struct point pt);
void readPoint(struct point* ptr);
int main(void) {
  //! showMemory(start=65520)
  struct point z;
  readPoint(&z);
  printPoint(z);
  return 0;
}

void readPoint(struct point* ptr) {
  printf("\nEnter a new point: \n");
  printf("x-coordinate: ");
  scanf("%d", &ptr->x);
  printf("y-coordinate: ");
  scanf("%d", &ptr->y);
}

void printPoint(struct point pt) { printf("(%d, %d)\n", pt.x, pt.y); }