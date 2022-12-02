#include<stdio.h>

int CheckFreq(int iNo)        //N
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
            if(iDigit == 4)
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

    iRet = CheckFreq(iValue1);

    printf("The frequency is : %d\n", iRet);

    return 0;
}