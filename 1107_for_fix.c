// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1517856964958

#include <stdio.h>

int main(void) {
  int i;

  printf("+");
  for (i = 0; i < 23; i++) printf("-");
  printf("+\n");

  for (i = 0; i < 3; i++) {
    printf("| o | X | o | X | o | X |");
    printf("\n");
    printf("| X | o | X | o | X | o |");
    printf("\n");
  }

  printf("+");
  for (i = 0; i < 23; i++) printf("-");
  printf("+");

  return (0);
}
