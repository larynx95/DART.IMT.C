/*
 * arrow_access.c -- program accesses structure members using arrow operator
 */
#include <stdio.h>

typedef struct student {
  char srollno[10];
  char sclass[10];
  char name[25];
  char fname[25];
  char mname[25];
  char add[200];
} Student;

void arrow_access(Student const *); /* prototype */

int main(void) {
  Student a = {"35M2K14", "cs",    "Christine",
               "James",   "Hayek", "Post Box 1234, Park Avenue, UK"};

  printf("Student a Information:\n");
  arrow_access(&a);
  return 0;
}

void arrow_access(Student const *stu) /* 'stu' is a pointer-to-Student */
{
  /* Let's access members of 'a' using arrow operator */

  printf("roll no.: %s\n", stu->srollno);
  printf("class: %s\n", stu->sclass);
  printf("name: %s\n", stu->name);
  printf("father's name: %s\n", stu->fname);
  printf("mother's name: %s\n", stu->mname);
  printf("And address: %s\n", stu->add);
}