// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518212450297

#include <stdio.h>

int main(void) {
  //! showArray(word, cursors=[i])
  char word[30];
  int i = 0;
  printf("Please enter a word: ");
  scanf("%s", word);
  while (word[i] != '\0') i++;
  printf("%s has word length %d.\n", word, i);
  return 0;
}