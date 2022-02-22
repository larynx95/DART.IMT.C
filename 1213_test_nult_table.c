#include <stdio.h>
int main(void) {
  int num;
  int i;
  scanf("%d", &num);
  for (i = 0; i < 11; i++) {
    printf("%dx%d = %d\n", i, num, i * num);
  }
}