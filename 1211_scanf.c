// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1518464162352

#include <stdio.h>

int main() {
  int age;  // DECLARE
  printf("Whare is your age ?\n");
  scanf("%d", &age);
  printf("You are %d years old\n", age);  // USE
  return 0;
}

/*

scanf 는 왜 변수, 값이 아니라 주소를 필요로 하는가?
1) 변수가 어떤 값으로 초기화되지 않았다.
2) 그렇다면 초기화되기만 한다면 쓸 수 있는가? 아니다. 초기화된 변수도 안 된다.

*/