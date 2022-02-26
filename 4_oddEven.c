#include <stdio.h>
#include <conio.h>

int isEven(int n);

void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (isEven(n) == 1)
  {
    printf("The number is Even \n");
  }
  else
  {
    printf("The number is odd \n");
  }

  getch();
}

int isEven(int n)
{
  if (n % 2 == 0)
    return 1;

  return 0;
}