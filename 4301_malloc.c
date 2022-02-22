// https://codecast.france-ioi.org/v6/player?base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1519588708670

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //! showMemory(start=272)
  int *intptr;
  double *doubleptr;
  intptr = (int *)malloc(sizeof(int));
  *intptr = 5;
  doubleptr = (double *)malloc(sizeof(double));
  *doubleptr = 9.0;
  return 0;
}

/*
## 왜 malloc을 사용하나?
malloc allocate a block of memory on the "HEAP"
-> 그렇다면 malloc이 아니면 HEAP을 사용하지 않고 다른 곳에 저장한다는 의미인가?
-> stack에 저장한다.

[memory allocation in Stack and
Heap](https://stackoverflow.com/questions/6770596/memory-allocation-in-stack-and-heap)
*/