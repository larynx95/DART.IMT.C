#include <stdio.h>
int main(void) {
  char arr[69][40];
  for (int i = 0; i < 68; i++) {
    scanf("%s ", arr[i]);
  }

  for (int i = 67; i > -1; i--) {
    printf("%s ", arr[i]);
  }
  return 0;
}
