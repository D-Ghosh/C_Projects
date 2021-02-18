#include <stdio.h>

int main()
{
    int a, b, c, tol = 1;
    printf("Enter a no.\n");
    scanf("%d", &a);
    printf("Enter another no. for power\n");
    scanf("%d", &b);
    c = b;
    while(b >= 1)
    {
        tol *= a;
        b--;
    }
    printf("%d to the power %d is %d\n", a, c, tol);
    return 0;
}