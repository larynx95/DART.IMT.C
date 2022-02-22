#include <stdio.h>
int main(void) {
  int n;
  int val = 0;
  int count = 0;
  scanf("%d", &n);
  while (val != n) {
    count += 1;
    scanf("%d", &val);

    if (val == n) {
      printf("Number of tries needed:\n%d", count);
      return 0;
    }

    if (val < n) {
      printf("it is more\n");
    } else {
      printf("it is less\n");
    }
  }
  printf("Number of tries needed:\n%d", count);
  return 0;
}