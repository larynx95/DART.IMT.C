#include <stdio.h>
int main(void)
{
  int age, lug;
  scanf("%d", &age);
  scanf("%d", &lug);

  if (age == 60)
  {
    printf("%d", 0);
    return 0;
  }

  if (age < 10)
  {
    printf("%d", 5);
    return 0;
  }

  if (lug > 20)
  {
    printf("%d", 30 + 10);
  }
  else
  {
    printf("%d", 30);
  }

  return 0;
}