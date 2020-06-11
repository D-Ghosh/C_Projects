// Calculating area and perimeter of a ractangle, area and circumference of a circle

#include <stdio.h>

int main()
{
    int b, l, r, a_rec, peri;
    float a_cir, circum;
    printf("Enter the value of length and breadth of a rectangle\n");
    scanf("%d%d", &l, &b);
    printf("Enter the radius of the circle\n");
    scanf("%d", &r);
    a_rec = b*l;                         // Area of Rec. Calc.
    peri = 2*(b+l);                      // Perimeter of Rec. Calc.
    a_cir = 3.14*r*r;                    // Area of Circle Calc.
    circum = 2*3.14*r;                   // Circumference of Circle Calc.
    printf("The area and perimeter of the rectangle are %d and %d\n", a_rec, peri);
    printf("The area and circumference of the circle are %f and %f\n", a_cir, circum);
    return 0;
}
