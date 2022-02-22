#include <stdio.h>
int main(void) {
  int i;
  int sum = 0;
  int ep, r, wt, ht, num;
  scanf("%d", &num);
  for (i = 0; i < num; i++) {
    scanf("%d%d%d%d", &ep, &r, &wt, &ht);
    sum += (r - ep) * (wt + ht);
  }
  printf("%d", sum);
  return 0;
}