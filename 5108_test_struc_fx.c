#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
  struct date today, tomorrow;
  readDate(&today);
  printDate(today);
  tomorrow = advanceDay(today);
  printDate(tomorrow);
  return 0;
}

/* add your function definitions here */
void printDate(struct date dval) {
  printf("%02d/%02d/%4d\n", dval.month, dval.day, dval.year);
}

void readDate(struct date *dptr) {
  scanf("%d %d %d", &(*dptr).year, &(*dptr).month, &(*dptr).day);
}

struct date advanceDay(struct date dval) {
  if (dval.month == 2 && dval.day == 28) {
    dval.month++;
    dval.day = 1;
  } else if (dval.month == 12 && dval.day == 31) {
    dval.year++;
    dval.month = 1;
    dval.day = 1;
  } else if ((dval.month == 4 || dval.month == 6 || dval.month == 9 ||
              dval.month == 11) &&
             dval.day == 30) {
    dval.month++;
    dval.day = 1;
  } else if (dval.day == 31) {
    dval.month++;
    dval.day = 1;
  } else {
    dval.day++;
  }
  return dval;
}