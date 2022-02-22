// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Fdartmouth%2F1517937261718

#include <stdio.h>

int main(void) {
  /* Variable names can use:
  lowercase and uppercase letters (characters) and digits
  do not use special characters like @ # & " ...
  do not use accented characters like é è à ...
  do not start with a digit
  start only with a letter
  spaces are forbidden
   _ may be used instead of a space in the name of the variable
  YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces   */

  int validBalance;
  validBalance = 50;
  printf("I have %d dollars in my bank account.\n", validBalance);
  return 0;
}

/*

Preserved keywords in C

auto	else	long	switch
break	enum	register	typedef
case	extern	return	union
char	float	short	unsigned
const	for	signed	void
continue	goto	sizeof	volatile
default	if	static	while
do	int	struct	_Packed
double

*/