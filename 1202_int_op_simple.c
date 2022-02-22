// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1517948603977

#include <stdio.h>

int main() {
  printf("3+2 equals %d and 3-2 equals %d and 3*2 equals %d\n", 3 + 2, 3 - 2,
         3 * 2);
  printf("3+2*3 equals %d and (3+2)*3 equals %d\n", 3 + 2 * 3, (3 + 2) * 3);
  printf("2*8-2*7-4 equals %d\n", 2 * 8 - 2 * 7 - 4);
  printf("2*(8-2*(7-4)) equals %d\n", 2 * (8 - 2 * (7 - 4)));
  printf("2*(8-2*7)-4 equals %d\n", 2 * (8 - 2 * 7) - 4);
  return 0;
}