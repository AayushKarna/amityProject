#include <stdio.h>
#include <conio.h>

int factorial(int n);

void main()
{
  int n;
  printf("Enter a positive number: ");
  scanf("%d", &n);
  printf("Facotrial of %d = %d\n", n, factorial(n));
  getch();
}

int factorial(int n)
{
  if (n == 0)
    return 1;

  return n * factorial(n - 1);
}