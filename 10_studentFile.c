#include <stdio.h>
#include <conio.h>

int main(void)
{
  // initial variables
  int n, i, marks;
  char name[50];

  // open file
  FILE *fptr = fopen("students.txt", "w");

  // check if file was successfully opened
  if (fptr == NULL)
  {
    printf("Could't open file!\n");
    getch();
    return 1;
  }

  // get n
  printf("Number of students? ");
  scanf("%d", &n);

  // get details of n students and write them in file
  for (i = 0; i < n; i++)
  {
    printf("\nEnter records for student %d\n", i + 1);
    printf("Name: ");
    scanf("%s", name);
    printf("Marks: ");
    scanf("%d", &marks);
    fprintf(fptr, "\nName: %s\nMarks = %d\n", name, marks);
  }

  printf("\nDetails successfully stored in file.\n");

  // close file
  fclose(fptr);

  // program ends
  getch();
  return 0;
}