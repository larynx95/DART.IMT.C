#include <stdio.h>

// fx. prototype
int calcMem(char, int);
int mypow(int, int);
int howBig(int);

// main fx.
int main() {
  // user input
  char ch;
  int num;
  scanf("%c %d", &ch, &num);

  // calculate memory size
  int memsize = calcMem(ch, num);
  int t = howBig(memsize);

  // array
  char arr[4][3] = {"B", "KB", "MB"};

  int val = memsize;
  for (int i = t; i > -1; i--) {
    printf("%d %s ", val / mypow(1000, i), arr[i]);
    val = memsize % mypow(1000, i);
    if (i != 0) {
      printf("and ");
    }
  }

  return 0;
}

// fx. definition
int calcMem(char c, int n) {
  if (c == 'c') {
    return n;
  } else if (c == 's') {
    return n * 2;
  } else if (c == 'i') {
    return n * 4;
  } else if (c == 'd') {
    return n * 8;
  }
  return 0;
}

int mypow(int a, int b) {
  if (b == 0) {
    return 1;
  } else {
    return a * mypow(a, b - 1);
  }
}

int howBig(int n) {
  if (n / 1000 == 0) {
    return 0;
  } else {
    return 1 + howBig(n / 1000);
  }
}