#include <stdio.h>

// fx prototypes
/*
1. foot -> meter
2. meter -> foot
3. pound -> gram
4. gram -> pound
5. fahren -> celc
6. celc -> faren
*/
int compare_strings(char[], char[]);
int convType(char y[10]);
double feetToMeter(double);
double meterToFeet(double);
double poundToGram(double);
double gramToPound(double);
double fahToCel(double);
double celToFah(double);

// mian fx
int main(void) {
  // the number of arguments
  int n;
  scanf("%d", &n);

  // input and store to Array
  double varr[n];
  int tarr[n];
  for (int i = 0; i < n; i++) {
    double val;
    char type[10];
    scanf("%lf %s", &val, type);
    varr[i] = val;
    tarr[i] = convType(type);
  }

  for (int i = 0; i < n; i++) {
    if (tarr[i] == 1) {
      printf("%lf m\n", feetToMeter(varr[i]));
    } else if (tarr[i] == 2) {
      printf("%lf ft\n", meterToFeet(varr[i]));
    } else if (tarr[i] == 3) {
      printf("%lf g\n", poundToGram(varr[i]));
    } else if (tarr[i] == 4) {
      printf("%lf lbs\n", gramToPound(varr[i]));
    } else if (tarr[i] == 5) {
      printf("%lf c\n", fahToCel(varr[i]));
    } else {
      printf("%lf f\n", celToFah(varr[i]));
    }
  }
}

// fx definitions
// string comparison
int compare_strings(char a[], char b[]) {
  int c = 0;

  while (a[c] == b[c]) {
    if (a[c] == '\0' || b[c] == '\0') break;
    c++;
  }

  if (a[c] == '\0' && b[c] == '\0')
    return 0;
  else
    return -1;
}

// what kind of conversion?
int convType(char y[]) {
  if (compare_strings(y, "ft") == 0)  // feet to meters
  {
    return 1;
  } else if (compare_strings(y, "m") == 0)  // meters to feet
  {
    return 2;
  } else if (compare_strings(y, "lbs") == 0)  // pounds to grams
  {
    return 3;
  } else if (compare_strings(y, "g") == 0)  // grams to pounds
  {
    return 4;
  } else if (compare_strings(y, "f") == 0)  // fahrenheit to celcius
  {
    return 5;
  } else  // celcius to fahrenheit
  {
    return 6;
  }
}

double feetToMeter(double x) { return x * 0.3048; }

double meterToFeet(double x) { return x / 0.3048; }

double poundToGram(double x) { return x / 0.002205; }

double gramToPound(double x) { return x * 0.002205; }

double fahToCel(double x) { return (x - 32) / 1.8; }

double celToFah(double x) { return x * 1.8 + 32; }
