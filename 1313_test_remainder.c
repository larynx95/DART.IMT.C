#include <stdio.h>
int main(void) {
  int dividend, divisor;
  scanf("%d", &dividend);
  scanf("%d", &divisor);
  printf("%d\n", dividend / divisor);
  printf("%d", dividend % divisor);
}