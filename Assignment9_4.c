
#include<stdio.h>

int OddFact(int iValue)         //N
{
    int iCnt = 0;
    int iOddFact = 1;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        if(iCnt%2 !=0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iOddFact;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iRet = OddFact(iNo);

    printf("The Odd factorial of %d is %d\n", iNo, iRet);

    return 0;
}