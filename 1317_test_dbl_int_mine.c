#include <stdio.h>
int main(void) {
  int n;
  double r;
  scanf("%d", &n);
  scanf("%lf", &r);
  printf("%d", (int)(n + n * r * 0.01));
  return 0;
}