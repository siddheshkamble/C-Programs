// write a program which accepts number from user and return defference of its all factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iAdd = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt<= iNo/2; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            iAdd = iAdd + iCnt;
        }
    }

    iDiff = iSum - iAdd;
    return iDiff;
}

int main()
{
    int iValue;
    int iRet = 0;

    printf("Enter Value :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Summation is : %d", iRet);
    return 0;
}