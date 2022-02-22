// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518455289420

#include <stdio.h>

int main(void) {
  int sunny = 1;
  int vacation = 1;
  int sunAndVacation = sunny && vacation;
  // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
  if (sunAndVacation) {
    printf("Yeah!!\n");
  } else {
    printf("Too bad!\n");
  }
  return 0;
}
