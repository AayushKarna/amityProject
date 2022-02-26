#include <stdio.h>
#include <conio.h>
#define MAX 20

struct Student
{
  char name[50];
  float mark;
};

void main()
{
  struct Student s[MAX];
  int i;

  // input details
  for (i = 0; i < MAX; i++)
  {
    printf("\nEnter records for student %d\n", i + 1);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Marks: ");
    scanf("%f", &s[i].mark);
  }

  // displaying details
  printf("\nRecord You Entered are given below:\n");
  printf("Name \t Marks\n");
  for (i = 0; i < MAX; i++)
  {
    printf("%s \t %.2f\n", s[i].name, s[i].mark);
  }

  getch();
}