
#include<stdio.h>

int DollarToRupee(int iValue)
{
    int iMult = 0;
    iMult = 70 * iValue;
    return iMult;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the Dollar :\n");
    scanf("%d", &iNo);

    iRet = DollarToRupee(iNo);

    printf("The %d$ is %dRs\n", iNo, iRet);

    return 0;
}