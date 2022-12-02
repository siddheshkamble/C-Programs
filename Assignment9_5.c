
#include<stdio.h>

int DifferenceFact(int iValue)      //2N
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

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

    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        if(iCnt%2 !=0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iRet = DifferenceFact(iNo);

    printf("The factorial difference is %d\n", iRet);

    return 0;
}