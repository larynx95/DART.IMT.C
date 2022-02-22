// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1519660322746

#include <stdlib.h>
int main(void) {
  //! showMemory(start=272)
  int *array;
  array = (int *)malloc(5 * sizeof(int));
  array[0] = 3;
  array[1] = 44;
  array[2] = 2;
  *(array + 3) = 7;
  *(array + 4) = -1;
  free(array);
  return 0;
}
