#include <stdio.h>
#include <conio.h>

void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n > 0)
    printf("The number is positve\n");

  if (n < 0)
    printf("The number is negative\n");

  if (n == 0)
    printf("The number is 0\n");

  getch();
}