// https://codecast.france-ioi.org/v5/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518459007239

#include <stdio.h>

int main(void) {
  int sunny = 0;     // 0: cloudy, other value (1 for example): sunny
  int vacation = 0;  // 0: working , other value (1 for example): vacation
  int NOTsunnyANDNOTvacation = !sunny && !vacation;
  if (NOTsunnyANDNOTvacation) {
    printf("It's neither sunny nor am I on vacation!\n");
  }
  return 0;
}