#include <stdio.h>

int main()
{
  float C, F;
  printf("Enter the temp. in ferenhite\n");
  scanf("%f", &F);
  C = (F-32)*(5/9);
  printf("The entered temp. in celcius is %f\n", C);
  return 0;
}
