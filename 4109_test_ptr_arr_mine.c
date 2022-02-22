#include <stdio.h>

void behind(int *, int);

int main(void) {
  int array[10];
  int N, i;

  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  behind(array, N);
  for (i = 0; i < N; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}

/* TODO: Write your function behind() here: */
void behind(int *arr, int num) {
  int highest = -10000;
  int i;
  for (i = 0; i < num; i++) {
    if (arr[i] > highest) {
      highest = arr[i];
    }
  }

  int j;
  for (j = 0; j < num; j++) {
    int temp = arr[j];
    arr[j] = highest - temp;
  }
}