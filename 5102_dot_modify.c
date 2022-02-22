// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1521045859199

#include <stdio.h>

struct student {
  char firstName[30];
  char lastName[30];
  int birthYear;
  double aveGrade;
};

int main(void) {
  //! showMemory(start=65520)
  struct student learner;
  printf("First name: ");
  scanf("%s", learner.firstName);
  printf("Last name: ");
  scanf("%s", learner.lastName);
  printf("Year of birth:");
  scanf("%d", &learner.birthYear);
  printf("Average grade: ");
  scanf("%lf", &learner.aveGrade);

  printf("Name: %s %s\n", learner.firstName, learner.lastName);
  printf("Year of birth: %d\n", learner.birthYear);
  printf("Average grade: %.2lf\n", learner.aveGrade);

  return 0;
}
