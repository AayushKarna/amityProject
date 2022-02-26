#include <stdio.h>
#include <conio.h>

int sum(int x, int y);

void main()
{
  int a, b;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  printf("%d + %d = %d\n", a, b, sum(a, b));
  getch();
}

int sum(int x, int y)
{
  return x + y;
}