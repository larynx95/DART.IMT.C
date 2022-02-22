#include <stdio.h>
int main(void)
{
  int ht, lv;
  scanf("%d", &ht);
  scanf("%d", &lv);

  if (ht <= 5 && lv >= 8)
  {
    printf("Tinuviel");
  }
  else if (ht >= 10 && lv >= 10)
  {
    printf("Calaelen");
  }
  else if (ht <= 8 && lv <= 5)
  {
    printf("Falarion");
  }
  else if (ht >= 12 && lv <= 7)
  {
    printf("Dorthonion");
  }
  else
  {
    printf("uncertain");
  }
  return 0;
}
