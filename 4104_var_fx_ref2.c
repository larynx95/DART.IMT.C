// https://codecast.france-ioi.org/v6/player?base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1519143375455

#include <stdio.h>
// reference version of fx
// passing variable to fx by reference
void add(int, int, int *);

int main(void) {
  //! showMemory(start=65520)
  int a, b, sum;
  printf("Please enter two integers: ");
  scanf("%d%d", &a, &b);
  add(a, b, &sum);  // &sum is address
  printf("%d + %d = %d\n", a, b, sum);
  return 0;
}

void add(int x, int y, int *resultptr) {
  int z;
  z = x + y;
  printf("Added numbers in the function!\n");
  *resultptr = z;
  printf("Updated variable with pointer in function.\n");
}
