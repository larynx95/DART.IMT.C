#include <stdio.h>
int main(void)
{
  int n;
  int maxlen = 0;
  int len = 0;
  scanf("%d", &n);
  char word[100];

  for (int i = 0; i < n; i++)
  {
    scanf("%s", word);
    len = 0;
    for (int j = 0; word[j] != '\0'; j++)
    {
      len += 1;
    }

    if (len > maxlen)
    {
      maxlen = len;
    }
  }

  printf("%d", maxlen);

  return 0;
}