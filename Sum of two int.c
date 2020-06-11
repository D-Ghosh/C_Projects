#include <stdio.h>

int main()
{
  int n1, n2, num;
  printf("Enter the first number\n");
  scanf("%d", &n1);
  printf("Enter the 2nd number\n");
  scanf("%d", &n2);
  num = n1 + n2;
  printf("The sum of the number %d and %d is %d\n", n1, n2, num);
  return 0;
}
