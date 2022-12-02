#include<stdio.h>

int DigitMult(int iNo)        //N
{
    int iCnt = 0;
    int iDigit = 0;
    int iMult = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }


    while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue1);

    iRet = DigitMult(iValue1);

    printf("The Multiplication is : %d\n", iRet);

    return 0;
}