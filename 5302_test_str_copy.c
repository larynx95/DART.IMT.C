/*
Where is Null terminator ("\0") ?
It can't be counted?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char text_A[5];
  char text_B[5] = "abcde";
  printf("%s", text_B);          // abcde
  printf("%d", strlen(text_B));  // 5
}