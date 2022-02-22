// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1517857876570
// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1517947031622

#include <stdio.h>

int main(void) {
  // example 1
  int i = 0;
  // A for loop that prints BlahBlehBlih three times.
  for (i = 0; i < 3; i++) {
    printf("Blah");
    printf("Bleh");
    printf("Blih ");
  }
  // End of for loop. Start new line.
  printf("\n");
  // A for loop that prints BlohBluh six times.
  for (i = 0; i < 6; i++) {
    printf("Bloh");
    printf("Bluh ");
  }

  // example 2
  printf("Welcome, humans!\n");
  printf("I am Buttons, your robot instructor! \n");
  printf("Today we are going to learn how to love robots :) \n");
  printf("Repeat after me: \n");

  for (i = 0; i < 3; i++) printf("I love Buttons!\n");

  printf("Still not convinced? \n");
  printf("In that case, let me explain some more ... \n");

  /*for (int i = 0; i < 200; i++)
  {
    printf("We come in peace and kindness! \n");
    printf("A robot cannot hurt a human being or ");
    printf("allow a human being to be hurt. ");
  }*/

  printf("This is the end of today's lesson! ");
  printf("Thank you for your cooperation, and");
  // printf("goodbye!");

  return (0);
}