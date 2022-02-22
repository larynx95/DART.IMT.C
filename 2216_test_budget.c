#include <stdio.h>
int main(void)
{
  int sum = 0;
  int val = 0;
  while (val != -1)
  {
    scanf("%d", &val);
    sum += val;
  }
  printf("%d", sum + 1);
  return 0;
}