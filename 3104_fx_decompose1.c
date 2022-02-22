// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1533650081743

#include <stdio.h>

int main(void) {
  int nCols;
  int nLines;
  int i, j;

  printf("How many columns would you like? ");
  scanf("%d", &nCols);
  printf("How many lines would you like? ");
  scanf("%d", &nLines);
  for (i = 0; i < nCols; i++) {
    printf("X");
  }
  printf("\n");
  for (i = 0; i < nLines; i++) {
    for (j = 0; j < i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }
  for (i = 0; i < nLines; i++) {
    for (j = 0; j < nCols; j++) {
      printf("#");
    }
    printf("\n");
  }
}