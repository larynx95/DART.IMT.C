#include <stdio.h>

// Write your function prototype here
int elixir(int *);

int main(void) {
  int age;
  int *ageAddr = &age;
  scanf("%d", ageAddr);
  printf("Your current age is %d.\n", age);

  // Write your function call here
  age = elixir(ageAddr);

  printf("Your new age will be %d!\n", age);
  return 0;
}

// Write your function here
int elixir(int *age) {
  if (*age >= 21) {
    return *age - 10;
  } else {
    return *age * 2;
  }
}