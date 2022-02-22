#include <stdio.h>
int main(void)
{
  int arr[10];
  int len = sizeof(arr) / sizeof(int);

  for (int i = 0; i < len; i++)
  {
    int val;
    scanf("%d", &val);
    arr[i] = val;
  }

  int idx;
  scanf("%d", &idx);
  printf("%d", arr[idx]);
  return 0;
}