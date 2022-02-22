#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);

  int num[n];
  char type[n];

  for (int i = 0; i < n; i++) {
    scanf("%d %c", &num[i], &type[i]);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (type[i] == 'i') {
      ans += 4 * num[i];
    } else if (type[i] == 'c') {
      ans += num[i];
    } else if (type[i] == 'd') {
      ans += 8 * num[i];
    } else {
      printf("Invalid tracking code type");
      return 0;
    }
  }

  if (ans == 1) {
    printf("1 byte");
  } else {
    printf("%d bytes", ans);
  }
  return (0);
}