// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1518204459525

#include <stdio.h>

int main(void) {
  //! showArray(word, cursors[i])
  char word[51];  // arrray of characters (string)
  printf("Please enter a word with 50 letters: ");
  scanf("%s", word);
  printf("The word read is: %s.\n", word);
  printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2],
         word[3]);
  word[1] = 'a';
  printf("The new word is %s\n", word);
  return 0;
}
