#include <stdio.h>
int main(void)
{
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  int sum = a + b;
  if (sum >= 10)
  {
    printf("special tax\n%d", 36);
  }
  else
  {
    printf("regular tax\n%d", sum * 2);
  }
  return 0;
}