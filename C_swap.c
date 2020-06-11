#include <stdio.h>

int main()
{
  int c, d, t;
  printf("Enter two integers\n");
  scanf("%d %d", &c, &d);
  printf("Before entering: C = %d and D = %d\n", c, d);
  t = c;
  c = d;
  d = t;
  printf("After swapping C = %d and D = %d\n", c, d);
  return 0;
}
