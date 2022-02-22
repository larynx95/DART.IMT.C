#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
  // Fill in your main function here
  int num;              // declared, but not initialized
  struct point *ptarr;  // declared, but not initialized
  scanf("%d", &num);    // num initialized
  ptarr = (struct point *)malloc(num * sizeof(struct point));  // initialized

  initializePoly(ptarr, num);
  printPoly(ptarr, num);
  free(ptarr);
}

void printPoint(struct point pt) { printf("(%d, %d)\n", pt.x, pt.y); }

void printPoly(struct point *ptr, int N) {
  int i;
  for (i = 0; i < N; i++) {
    printPoint(ptr[i]);
  }
}

// Write your initializePoly() function here
void initializePoly(struct point *stptr, int n) {
  for (int i = 0; i < n; i++) {
    (stptr + i)->x = -1 * i;
    (stptr + i)->y = i * i;
  }
}