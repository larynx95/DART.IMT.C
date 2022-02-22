// https://codecast.france-ioi.org/v6/player?stepperControls=_undo,_redo,_expr,_out,_over&base=https%3A%2F%2Ffioi-recordings.s3.amazonaws.com%2Ftcom%2F1535043467470

#include <stdio.h>

int main() {
  //! showMemory(start=65520)
  int a = 42;
  double d = 58.394;
  char c = 'r';
  int* addressOfA = &a;
  printf("address of a: %p\n", addressOfA);
  double* addressOfD = &d;
  printf("address of d: %p\n", addressOfD);
  char* addressOfC = &c;
  printf("address of c: %p\n", addressOfC);
  return 0;
}

/*
# pointer rule
1) A pointer variable does not store value directly just like int, float
variables. A pointer store only reference (memory address) of another variable.

2) A pointer variable must be initialized by a valid memory reference (memory
address).

3) Do not write any dereferencing operation before initializing
pointer variable with a valid memory address; this may cause run time error.

4) If you do not want to assign any memory address to the pointer variable, you
can define pointer as "point to nothing" by assigning NULL to that pointer.

5) If you want to initialize two pointers with same memory address (reference),
you can make assignment operation (=) to them.

# right-left rule
http://cseweb.ucsd.edu/~ricko/rt_lt.rule.html
The "right-left" rule is a completely regular rule for deciphering C
declarations.  It can also be useful in creating them.

First, symbols.  Read
     *		as "pointer to"			- always on the left side
     [] 	as "array of"			- always on the right side
     ()		as "function returning"		- always on the right side

# pointer definition
int* prt; // ptr is a pointer to an Int value, pointer itself is an address

# Position of asterisk
int *a;
int*a;
int* a;
int * a;

# pointer, address, value
Pointer	 Memory Address	                    Memory Contents
------------------------------------------------------------------------------------
p	       Yep	                              Nope
*p	     Nope	                              Yep
*p++	   Incremented after value is read	  Unchanged
*(p++)	 Incremented after value is read	  Unchanged
(*p)++	 Unchanged	                        Incremented after it's used
*++p	   Incremented before value is read	  Unchanged
*(++p)	 Incremented before value is read	  Unchanged
++*p	   Unchanged	                        Incremented before it's used
++(*p)	 Unchanged	                        Incremented before it's used
p*++	   Not a pointer	                    Not a pointer
p++*	   Not a pointer	                    Not a pointer

# array notation
Array Notation	Pointer Equivalent
------------------------------------
array[0]	      *a
array[1]	      *(a+1)
array[2]	      *(a+2)
array[3]	      *(a+3)
array[x]	      *(a+x)

# array with pointer
Doodad	      What It Is	                          Seen by The Compiler
-------------------------------------------------------------------------
array+1	      An address                            A pointer
*(array+1)	  Contents of address, what lives there	A string
*(*(array+1))	Contents of a character array	        A character
**(array+1)	  Same as above	                        Same as above
*/