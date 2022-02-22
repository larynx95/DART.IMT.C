#include <stdio.h>

int min(int, int);

int main(void) {
  int i;
  int minimum;
  int num;
  int a, b, c;

  scanf("%d", &num);
  scanf("%d%d", &a, &b);
  minimum = min(a, b);

  for (i = 2; i < num; i++) {
    scanf("%d", &c);
    minimum = min(minimum, c);
  }
  printf("%d\n", minimum);

  return 0;
}

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}