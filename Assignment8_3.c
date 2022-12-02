#include<stdio.h>

int CheckFact(int iValue)
{
    int iCnt = 0;
    int iFact = 1;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iNo = 0, iRet = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    iRet = CheckFact(iNo);

    printf("The Factorial of %d is %d\n", iNo, iRet);

    return 0;
}