#include <stdio.h>
int main(void)
{
  int n;
  int a1, b1, a2, b2, a3, b3, a4, b4;
  scanf("%d", &n);
  scanf("%d", &a1);
  scanf("%d", &b1);
  scanf("%d", &a2);
  scanf("%d", &b2);
  scanf("%d", &a3);
  scanf("%d", &b3);
  scanf("%d", &a4);
  scanf("%d", &b4);
  int sum1 = a1 + a2 + a3 + a4;
  int sum2 = b1 + b2 + b3 + b4;
  if (sum1 > sum2)
  {
    printf("Team %d has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", 1, sum1, sum2);
  }
  else
  {
    printf("Team %d has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", 2, sum1, sum2);
  }
  return 0;
}