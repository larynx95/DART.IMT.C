#include <stdio.h>
int len(int arr[]);
int* rev(int arr[]);

int main() {
  int ar[6];
  scanf("%d %d %d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4], &ar[5]);

  int* ptr = rev(ar);
  int i = 0;
  for (i = 0; i < 6; i++) {
    printf("%d ", *(ptr + i));
  }
  return 0;
}

int len(int arr[]) {
  int i = 0;
  while (arr[i] != '\0') {
    i++;
  }
  return i;
}

void ReverseArray(int arr[], int size) {
  for (int i = 0; i < size / 2; ++i) {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
}

// TODO: define a fx. returning Array length (recursive)