#include <stdio.h>
int main(void)
{
  int len = 1;
  int even = 0;
  char word[50];
  scanf("%s", word);

  // string length
  while (word[len] != '\0')
    len++;

  // odd or even
  if (len % 2 == 0)
  {
    even = 1;
  }
  else
  {
    even = 0;
  }

  // find 't' or 'T'
  int idx = -1;
  int exist = 0;
  for (int i = 0; i < len; i++)
  {
    if (word[i] == 't' || word[i] == 'T')
    {
      exist = 1;
      idx = i;
      break;
    }
  }

  if (!exist)
  {
    printf("%d", -1);
  }
  else if (even)
  {
    if (idx < len / 2)
    {
      printf("%d", 1);
    }
    else
    {
      printf("%d", 2);
    }
  }
  else
  {
    if (idx < len / 2 + 1)
    {
      printf("%d", 1);
    }
    else
    {
      printf("%d", 2);
    }
  }

  return 0;
}