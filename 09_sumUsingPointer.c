#include <stdio.h>
#include <conio.h>

void main()
{
  int a, b;
  int *pa = &a, *pb = &b;

  printf("Enter 1st number: ");
  scanf("%d", pa);
  printf("Enter 2nd number: ");
  scanf("%d", pb);

  printf("Sum = %d\n", *pa + *pb);

  getch();
}
