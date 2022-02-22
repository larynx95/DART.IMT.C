#include <stdio.h>

int main(void) {
  int numbers[] = {4, -1, 8, 3, 0, -11};
  int *ptr;
  ptr = numbers + 2;
  ptr++;  // address arithmatic, not value arithmatic
  printf("%d ", *ptr);
  return 0;
}
