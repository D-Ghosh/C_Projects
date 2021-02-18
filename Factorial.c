#include <stdio.h>

int main()
{
    int i, a, fact = 1;
    printf("Enter a no.\n");
    scanf("%d", &i);
    a = i;
    while(i >= 1)
    {
        fact *= i;
        i--;
    }
    printf("Factorial of %d is %d\n", a, fact);
    return 0;
}