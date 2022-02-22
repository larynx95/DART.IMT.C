#include <stdio.h>
#include <string.h>
int main()
{
  int n;
  scanf("%d", &n);

  char arr[n * 2][10];

  int i;
  for (i = 0; i < n * 2; i++)
  {
    scanf("%s", arr[i]);
  }

  int j;
  for (j = 0; j < n * 2; j++)
  {
    char st1[10], st2[10];
    if (j % 2 == 0)
    {
      strcpy(st1, arr[j]);
    }
    else
    {
      strcpy(st2, arr[j]);
    }
    printf("%s %s\n", st2, st1);
  }

  return 0;
}