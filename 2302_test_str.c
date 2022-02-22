#include <stdio.h>
int main(void)
{
  int n;
  char word[101];
  scanf("%d", &n);
  scanf("%s", word);

  int i;
  for (i = 0; i < n; i++)
  {
    printf("%s\n", word);
  }

  return 0;
}
// What is null terminator in C Array?
