#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  double arr[n];

  for (int i = 0; i < n; i++){
    double in;
    scanf("%lf", &in);
    arr[i] = 22.0 - in;
  }

  for (int i = 0; i < n; i++)
  {
    printf("%.1lf\n", arr[i]);
  }
  return 0;
}
