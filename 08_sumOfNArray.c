#include <stdio.h>
#include <conio.h>
#define MAX 100

int sum(int *arr, int n);

void main()
{
  int n, numbersArr[MAX], i;

  // get the value of n
  printf("Number of elements? ");
  scanf("%d", &n);

  // take n inputs
  for (i = 0; i < n; i++)
  {
    printf("Element %d? ", i + 1);
    scanf("%d", numbersArr + i);
  }

  // print sum using sum function
  printf("Sum = %d\n", sum(numbersArr, n));

  getch();
}

int sum(int *arr, int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum += *(arr + i); // or sum += arr[i]

  return sum;
}