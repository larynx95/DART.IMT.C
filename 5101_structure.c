// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521044107532

#include <stdio.h>

struct student {
  char firstName[30];
  char lastName[30];
  int birthYear;
  double aveGrade;
};

int main(void) {
  //! showMemory(start=65520)
  struct student me = {"Petra", "Bonfert-Taylor", 1989, 3.5};
  struct student you = {"Remi", "Sharrock", 2005, 3.5};
  printf("Names: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName,
         you.lastName);
  printf("Year of birth: %d\n", me.birthYear);
  printf("Average grade: %.2lf\n", me.aveGrade);
  return 0;
}
