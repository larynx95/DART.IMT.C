// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1535374797560

#include <stdio.h>

void reset(int *);  // == (int [])

int main() {
  //! showMemory(start=65520)

  // declare and initialize an Array(mutable), simultaneously
  int arr[3] = {15, 16, 17};
  // the variable `arr` is a pointer
  //
  printf("%d", arr[1]);

  // declare and initialize an Array with pointer
  int *p;
  // p is pointer, and it's value is an address of memory,
  p = arr;
  // and the value in the memory is ...

  printf("%d", *(arr + 1));  // 16, asterisk expression

  reset(arr);
  return 0;
}

void reset(int *ptr) {  // == (int ptr[])
  *ptr = 0;             // == * (ptr + 0)
  *(ptr + 1) = 0;
  *(ptr + 2) = 0;

  // bracket expression
  ptr[0] = 1;
  ptr[1] = 1;
  ptr[2] = 1;
}