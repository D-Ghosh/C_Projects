// Calculating distance in different units

#include <stdio.h>

int main()
{
    float dis, m, f, inch, cm;
    printf("Enter the distance in km\n");
    scanf("%f", &dis);
    m = dis*1e3;            // meter calc.
    cm = dis*1e5;          // centemeter calc.
    f = dis*3280.84;        // feet calc.
    inch = dis*39370.1;     // inch calc.
    printf("The entered distance in\nmeters = %f\nfeets = %f\ninches = %f\ncentemeters = %f\n", m, f, inch, cm);
    return 0;
}
