#include <stdio.h>

void main()
{
  float p, r, interest;
  int t;
  printf("Enter the principle ammount\n");
  scanf("%f", &p);
  printf("Enter the rate of interest\n");
  scanf("%f", &r);
  printf("Enter the no. of years\n");
  scanf("%d", &t);
  interest = (p*t*r)/100;
  printf("The ammount of interest of %f at a rate %f for the years %d is %f", p, r, t, interest);
}
