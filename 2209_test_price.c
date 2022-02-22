#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);

  double prices[4];
  double lbs[4];

  for (int i = 0; i < n; i++)
  {
    scanf("%lf", &prices[i]);
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%lf", &lbs[i]);
  }

  double result = 0.000000;
  for (int i = 0; i < n; i++)
  {
    result += prices[i] * lbs[i];
  }

  printf("%.6lf", result);

  return 0;
}