#include <stdio.h>
int main(void) {
  int a, b, c, d, e;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  double avg = (double)(a + b + c + d + e) / 5;
  printf("%.2lf", avg);
}