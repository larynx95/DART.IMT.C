/* dot_access.c -- program accesses structure members using dot operator */
#include <stdio.h>

/* structure declaration */
typedef struct student {
  char srollno[10];
  char sclass[10];
  char name[25];
  char fname[25];
  char mname[25];
  char add[200];
} Student;

void dot_access(Student const); /* prototype */

int main(void) {
  Student a = {"35M2K14", "cs",    "Christine",
               "James",   "Hayek", "Post Box 1234, Park Avenue, UK"};

  printf("Student a Information:\n");
  dot_access(a); /* entire 'a' is passed */
  return 0;
}

/* entire Student 'a' is copied into Student 'stu' */
/* 'stu' is a variable of Student, not a pointer */
void dot_access(Student const stu) {
  /* Let's access members of 'a' using dot operator */

  print("roll no.: %s\n", stu.srollno);
  printf("class: %s\n", stu.sclass);
  printf("name: %s\n", stu.name);
  printf("father's name: %s\n", stu.fname);
  printf("mother's name: %s\n", stu.mname);
  printf("And address: %s\n", stu.add);
}