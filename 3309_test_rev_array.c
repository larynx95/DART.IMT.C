#include <stdio.h>
void ReverseArray(int arr[], int size);

int main() {
  int ar[6];
  scanf("%d %d %d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4], &ar[5]);

  ReverseArray(ar, 6);

  int i = 0;
  while (ar[i] != '\0') {
    if (i == 5) {
      printf("%d", ar[i]);
    } else {
      printf("%d ", ar[i]);
    }
    i++;
  }
  return 0;
}

void ReverseArray(int arr[], int size) {
  for (int i = 0; i < size / 2; ++i) {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
}