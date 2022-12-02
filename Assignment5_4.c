// write a program which accepts number from user and return summation of its all non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Value \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of NON FACOTR : %d\n", iRet);

    return 0;
}
