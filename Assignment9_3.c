
#include<stdio.h>

int EvenFact(int iValue)        //N
{
    int iCnt = 0;
    int iEvenFact = 1;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        if(iCnt%2 ==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iRet = EvenFact(iNo);

    printf("The Even factorial of %d is %d\n", iNo, iRet);

    return 0;
}