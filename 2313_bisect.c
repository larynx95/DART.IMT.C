// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518610736869

#include <stdio.h>

int main(void) {
  //! showArray(list, cursors=[ia, ib, mid])
  int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
  int n = 10;
  int item;
  int ia, ib, mid, found;

  printf("Which number are you looking for? ");
  scanf("%d", &item);
  ia = 0;
  ib = n - 1;
  found = 0;

  while (!found && (ia <= ib)) {
    mid = (ia + ib) / 2;  // middle index, but odd or even?
    if (item == list[mid]) {
      found = 1;  // found item!
    } else if (item < list[mid]) {
      ib = mid - 1;  // toss the top half
    } else {
      ia = mid + 1;  // toss the bottom half
    }
  }

  if (!found) {
    printf("Number %d was not found in the array. \n", item);
  } else {
    printf("Number %d was found at index %d in the array.\n", item, mid);
  }

  return 0;
}