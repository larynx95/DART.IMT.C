#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);

  int day = 1;
  int infected = 1;

  while (infected < n)
  {
    infected += infected * 2;
    day += 1;
  }

  printf("%d", day);
  return 0;
}