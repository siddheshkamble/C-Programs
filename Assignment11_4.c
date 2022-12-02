#include<stdio.h>

int Range(int iStart, int iEnd)        //N
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the START Number :\n");
    scanf("%d", &iValue1);

    printf("Enter the END Number :\n");
    scanf("%d", &iValue2);

    iRet = Range(iValue1, iValue2);

    printf("Even Number Addition Range in between %d & %d is : %d \n", iValue1, iValue2, iRet);

    return 0;
}