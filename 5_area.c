#include <stdio.h>
#include <conio.h>

int area(int l, int b);

void main()
{
  int l, b;
  printf("Length of rectangle: ");
  scanf("%d", &l);
  printf("Breadth of rectangle: ");
  scanf("%d", &b);
  printf("The area of rectangle is %d\n", area(l, b));
  getch();
}

int area(int l, int b)
{
  return l * b;
}