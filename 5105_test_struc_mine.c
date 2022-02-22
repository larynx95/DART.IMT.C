#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

void readDate(struct date *);
void printDate(struct date);

int main(void) {
  struct date today;
  readDate(&today);
  printDate(today);
  return 0;
}

void readDate(struct date *dptr) {
  scanf("%d %d %d", &(*dptr).year, &(*dptr).month, &(*dptr).day);
}

void printDate(struct date d) { printf("%d/%02d/%d", d.month, d.day, d.year); }