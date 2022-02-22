#include <stdio.h>
int main(void)
{
  int t1, t2;
  scanf("%d%d", &t1, &t2);

  int val = 0;
  while (val != -999)
  {
    int temp;
    scanf("%d", &temp);
    if (temp <= t2 && temp >= t1)
    {
      printf("Nothing to report\n");
    }
    else
    {
      printf("Alert!\n");
      return 0;
    }
    val = temp;
  }

  return 0;
}