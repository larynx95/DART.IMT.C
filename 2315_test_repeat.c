#include <stdio.h>
int main(void)
{
  char word[50];
  char swap;
  scanf("%s", word);

  // sort
  int i = 0;
  while (word[i] != '\0')
  {
    int j = 0;
    while (word[j + 1] != '\0')
    {
      if (word[j] - word[j + 1] > 0) // character is integer
      {
        swap = word[j];
        word[j] = word[j + 1];
        word[j + 1] = swap;
      }
      j++;
    }
    i++;
  }

  // count
  int k = 0;
  int ans = 0;
  while (word[k] != '\0')
  {
    int l = k + 1;
    int t = 0;
    while (word[l] != '\0')
    {
      if (word[k] == word[l])
      {
        t++;
        k = l;
        if (t == 1)
        {
          ans++;
        }
      }
      l++;
    }
    k++;
  }

  printf("%d", ans);
  return 0;
}

/*
01234567
aaaabccd

k=0  l=1  t=1  repeated word count = 1
     l=2  t=2              no increase
     l=3  t=3              no increase
k=4  l=5  t=0  different
k=5  l=6  t=1  repeated word count = 2
k=7  l=8  t=0  \0 termination 
*/
