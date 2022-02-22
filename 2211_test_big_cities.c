#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int freq = 0;
  for (int i = 0; i < n; i++)
  {
    int num;
    scanf("%d", &num);
    if (num > 10000)
    {
      freq += 1;
    }
  }

  printf("%d", freq);
  return 0;
}
