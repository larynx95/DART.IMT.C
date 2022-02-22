// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518821479457

#include <stdio.h>

int main(void) {
  int sunny = 0;
  int vacation = 0;
  int sunORvacation = sunny || vacation;
  // 1||1:1 1||0:1 0||1:1 0||0:0
  if (sunORvacation) {
    printf("Going well: it is sunny OR I am on vacation OR both!\n");
  } else {
    printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
  }
  return 0;
}