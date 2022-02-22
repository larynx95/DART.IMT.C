#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  // store names
  char name[n][30];
  int a;
  for (a = 0; a < n; a++)
  {
    scanf("%[^\n]", name[a]);
  }

  int i;
  for (i = 0; i < n; i++)
  {
    // get string length
    int len = 0;
    int idx_space = 0;
    int j;
    for (j = 0; name[i][j] != '\0'; j++)
    {
      len += 1;
      if (name[i][j] == ' ')
      {
        idx_space = j;
      }
    }

    // swap first and last names
    char str1[10];
    char str2[10];

    int l;
    for (l = idx_space + 1; l < len; l++)
    {
      str2[l] = name[i][l];
      printf("%c", name[i][l]);
    }

    int k;
    for (k = 0; k < idx_space; k++)
    {
      str1[k] = name[i][k];
    }
    printf("%s %s\n", str2, str1);
  }

  return 0;
}