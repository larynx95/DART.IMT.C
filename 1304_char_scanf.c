#include <stdio.h>
int main(void) {
  char c;
  scanf("%c", &c);
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4 - i; j++) {
      printf("+");
    }
    for (j = 0; j < i * 2 + 1; j++) {
      printf("%c", c);
    }
    for (j = 0; j < 4 - i; j++) {
      printf("+");
    }
    printf("\n");
  }
}
/* 9
++++#++++     4 1 4
+++###+++     3 3 3
++#####++     2 5 2
+#######+     1 7 1
#########     0 9 0

*/