#include <stdio.h>
// prototype declaration
int recSum(int);

// main fx
int main(void) {
  int n;
  scanf("%d", &n);

  printf("%d", recSum(n));
  return 0;
}

// fx definition
int recSum(int x) {
  if (x < 10) {
    return x;
  } else {
    return x % 10 + recSum(x / 10);
  }
}