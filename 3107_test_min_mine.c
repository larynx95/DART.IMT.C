#include <stdio.h>

int min(int, int);

int main() {
  int n;
  int minVal = 10000;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int val;
    scanf("%d", &val);
    if (min(val, minVal)) {
      minVal = val;
    }
  }

  printf("%d", minVal);
  return 0;
}

int min(int x, int y) { return (x - y) < 0; }