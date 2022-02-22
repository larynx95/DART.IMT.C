#include <stdio.h>

int main(void) {
  double cement;
  int bags;
  scanf("%lf", &cement);
  bags = cement / 120 +
         1;  // we know that the amount of cement is not a multiple of 120
  printf("%d", bags * 45);
  return (0);
}