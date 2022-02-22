#include <stdio.h>
int main(void) {
  // Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0
  double c;
  scanf("%lf", &c);
  printf("%.1lf", c * 9.0 / 5.0 + 32.0);
}