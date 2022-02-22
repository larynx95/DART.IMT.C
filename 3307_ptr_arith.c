// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1535373877478

#include <stdio.h>

int main() {
  //! showMemory(start=65520)
  int arr[3] = {15, 16, 17};
  printf("%p\n", arr);
  // name of array is pointer pointing the first element of array!

  int* ptr = arr;
  *ptr = 2;        // * arr   0R  arr[0]
  *(ptr + 1) = 3;  // * (arr + 1)   OR  arr[1]
  *(ptr + 2) = 5;  // * (arr + 2)   OR arr[2]

  // pointer arithmatics
  int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
  int *ptr1, *ptr2;
  ptr1 = array + 2;  // *ptr1: 12
  ptr2 = &ptr1[5];   // *ptr2: 0

  return 0;
}