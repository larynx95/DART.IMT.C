#include <stdio.h>
int main(void)
{
  //! showArray(word, cursors=[i])
  char word[50];
  int i = 0;
  scanf("%s", word);
  while (word[i] != '\0')
    i++;

  if (i % 2 == 0)
  {
    printf("%d", 1);
  }
  else
  {
    printf("%d", 2);
  }
  return 0;
}