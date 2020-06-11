// Calculating aggregate and percentage marks

#include <stdio.h>

int main()
{
    float ben, eng, cms, phys, math, avg, per, tol;
    printf("Enter the marks in Bengali\n");
    scanf("%f", &ben);
    printf("Enter the marks obtained in English\n");
    scanf("%f", &eng);
    printf("Entered the marks obtained in Physics\n");
    scanf("%f", &phys);
    printf("Entered the marks obtained in Math\n");
    scanf("%f", &math);
    printf("Entered the marks obtained in Computer Sci.\n");
    scanf("%f", &cms);
    tol = ben+eng+phys+math+cms;            // Calculating total marks obtained
    avg = tol/5;                            // Calculating avg.
    per = (tol/500)*100;                    // Calculating percentage
    printf("The aggregate and percentage marks is %f and %f\n", avg, per);
    return 0;
}
