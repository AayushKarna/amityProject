#include <stdio.h>
#include <conio.h>

int main(void)
{
  // initial variables
  int n, i;
  char name[50];
  float salary;

  // open file
  FILE *fptr = fopen("employee.txt", "w");

  // check if file was successfully opened
  if (fptr == NULL)
  {
    printf("Couldn't open file!\n");
    getch();
    return 0;
  }

  // get n
  printf("Number of employees? ");
  scanf("%d", &n);

  // get n details of employee and write them in file
  for (i = 0; i < n; i++)
  {
    printf("\nEnter records for employee %d\n", i + 1);
    printf("Name: ");
    scanf("%s", name);
    printf("Salary: ");
    scanf("%f", &salary);
    fprintf(fptr, "\nName: %s\nSalary = %.2f\n", name, salary);
  }

  printf("\nDetails successfully stored in file.\n");

  // close file
  fclose(fptr);

  // program end
  getch();
  return 0;
}