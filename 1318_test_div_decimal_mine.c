#include <stdio.h>
int main(void) {
  double a;
  double b;
  scanf("%lf", &a);
  scanf("%lf", &b);
  printf("%d", (int)(a / b));
  return 0;
}