#include <stdio.h>
#include <conio.h>
#define MAX 15

struct Student
{
  int roll_no;
  char name[50];
  int age;
  char address[100];
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
    printf("Roll number: ");
    scanf("%d", &s[i].roll_no);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Age: ");
    scanf("%d", &s[i].age);
    printf("Address: ");
    scanf("%s", s[i].address);
    printf("Marks: ");
    scanf("%f", &s[i].mark);
  }

  // displaying details
  printf("\nRecord You Entered are given below:\n");
  printf("R.N. \t Name \t Age \t Address \t Marks\n");
  for (i = 0; i < MAX; i++)
  {
    printf("%d \t %s \t %d \t %s \t %.2f\n", s[i].roll_no, s[i].name, s[i].age, s[i].address, s[i].mark);
  }

  getch();
}