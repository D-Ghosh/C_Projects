//program to convert temperature from Fahrenheit degrees into Centigrade degrees.

#include <stdio.h>

int main()
{
  float C, F;
  printf("Enter the temp. in Fahrenheit \n");
  scanf("%f", &F);
  C = (F-32)*(5/9);     //Formula for converting Fahrenhrit temperature into Centigrade degree
  printf("The entered temp. in celcius is %f\n", C);
  return 0;
}
