// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1517862939373

#include <stdio.h>

int main(void) {
  int i = 0;
  for (i = 0; i < 3; i++) {
    printf("C is fun!");
  }
  return 0;
}

/*

Is this right?
1) `for (int i=0; i<3; i++) {...}`
2) `for (int i=0; i<3; ++i) {...}`

C 언어에서 for loop을 사용할 때,
incremental value i 를 따로 정의하고 있다.
그런데 for 문 안에서 local로 정의하는 것이 더 효율적이지 않을까?
C++에서는 그렇게 하고 있는데.

*/