// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518462205043

#include <stdio.h>

int main() {
  int balance;   // creating a variable containing integer values
  balance = 50;  // assigning the value 50 into the balance variable
  printf("I have %d dollars in my account\n", balance);
  // expense of 40 dollars
  balance = balance - 40;
  printf("I have %d dollars in my account\n", balance);
  // add 20 dollars in my account
  balance = balance + 20;
  printf("I have %d dollars in my account\n", balance);
  // expense of 30 dollars
  balance = balance - 30;
  printf("I have %d dollar in my account\n", balance);
  return 0;
}
