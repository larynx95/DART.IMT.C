// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1512645639763_v6

#include <stdio.h>

int main() {
  //! showMemory(start=65520)
  int a = 10;
  int b = 11;
  {
    int c = 12;
    int d = 13;
    int e = a + c;
    c = b + d;
    printf("c: %d\n", c);
    printf("e: %d\n", e);
  }
  int f = 14;
  int g = 15;
  printf("f: %d\n", f);
  printf("g: %d", g);
}