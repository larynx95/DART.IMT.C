#include <stdio.h>
int main(void)
{
  // + - * / % : arithmetic operations
  // <  >  <=  >=  !=  ==  :  comparison operations
  double inc = 0.1;

  for (int i = 0; i < 10; i++)
  {
    double a = 5.0;
    double b = 5.0;
    inc *= 0.1;
    if (a == (b + inc))
    {
      printf("inc: %.9lf, a: %.9lf, b: %.9lf", inc, a, b);
    }
  }
  return 0;
}