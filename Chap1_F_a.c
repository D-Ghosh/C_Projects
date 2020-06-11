// Calculating gross sallary

#include <stdio.h>

int main()
{
    int bs, gs, da, hra;
    printf("Enter the ammount of basic sallary\n");
    scanf("%d", &bs);
    da = bs*40/100;            //calculation of D.A.
    hra = bs*20/100;           //calculation of H.R.A.
    gs = bs+da+hra;            //calculation of Gross Sallary
    printf("The gross sallary is Rs. %d\n", gs);
    return 0;
}
