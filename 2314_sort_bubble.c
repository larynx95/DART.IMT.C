// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518612236861

#include <stdio.h>

int main(void) {
  //! showArray(list, cursors=[i])
  // Sorting from smallest to largest
  int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
  int n = 10;
  int i, j;
  int swap;

  printf("Unsorted list: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }

  for (j = 0; j < n - 1; j++) {
    for (i = 0; i < n - 1; i++) {
      if (list[i] > list[i + 1]) {
        swap = list[i];
        list[i] = list[i + 1];
        list[i + 1] = swap;
      }
    }
  }

  printf("\nSorted list: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }

  return 0;
}
