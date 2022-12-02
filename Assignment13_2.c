#include<stdio.h>

int CountOdd(int iNo)        //N
{
    int iCnt = 0;
    int iFreq = 0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }


    while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2 != 0)
            {
                iFreq++;
            }
            iNo = iNo/10;
        }
    return iFreq;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue1);

    iRet = CountOdd(iValue1);

    printf("The frequency of Even is : %d\n", iRet);

    return 0;
}