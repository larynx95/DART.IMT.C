// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521050606015

#include <stdio.h>

struct student {
  char firstName[5];
  char lastName[5];
  int birthYear;
  double aveGrade;
};

int main(void) {
  //! showMemory(start=65520)
  struct student me;
  printf("Size of struct student is %zu.\n", sizeof(struct student));
  printf("Size of firstName is %zu.\n", sizeof(me.firstName));
  printf("Size of lastName is %zu.\n", sizeof(me.lastName));
  printf("Size of birthYear is %zu.\n", sizeof(me.birthYear));
  printf("Size of aveGrade is %zu.\n", sizeof(me.aveGrade));

  return 0;
}
