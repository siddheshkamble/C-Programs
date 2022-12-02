#include<stdio.h>

int Distance(int iNo )
{
    int iAns = 0;

    iAns = 1000 * iNo;

    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0.0;

    printf("Enter distance in Kilometer\n");
    scanf("%d", &iValue1);

    iRet = Distance(iValue1);
    printf("The distance in meter is : %d\n", iRet);

    return 0;
}