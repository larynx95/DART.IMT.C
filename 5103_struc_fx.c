// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521046478311

#include <stdio.h>

struct student {
  char firstName[30];
  char lastName[30];
  int birthYear;
  double aveGrade;
};
void printStudent(struct student stud);
int main(void) {
  //! showMemory(start=65520)
  struct student me = {"Petra", "Bonfert-Taylor", 1989, 3.5};
  struct student you = {"Remi", "Sharrock", 2005, 3.5};

  printStudent(me);
  printStudent(you);
  return 0;
}

void printStudent(struct student stud) {
  printf("Name: %s %s\n", stud.firstName, stud.lastName);
  printf("Year of birth: %d\n", stud.birthYear);
  printf("Average grade: %.2lf\n", stud.aveGrade);
}