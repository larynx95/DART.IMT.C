/*

TODO: Fix this code.

*/

#include <stdio.h>
#include <stdlib.h>

struct student {
  char name[50];
  int age;
  struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
  struct student *studptr;
  int myAge;
  char myName[50];
  scanf("%s %d", myName, &myAge);
  studptr = createStudent(myName, myAge);
  printf("New student created: %s is %d years old.\n", studptr->name,
         studptr->age);
  free(studptr);
  return 0;
}

// Write your createStudent function here (and any other functions you see fit)

struct student *createStudent(char studentName[], int studentAge) {
  struct student *ptr;
  ptr = (struct student *)malloc(sizeof(struct student));
  ptr->age = studentAge;
  ptr->name = studentName;  // TODO: Fix this!
  ptr->next = NULL;
  return ptr;
}

// expression must be a modifiable lvalue on struct pointer
// https://stackoverflow.com/questions/36916129/expression-must-be-a-modifiable-lvalue-on-struct-pointer