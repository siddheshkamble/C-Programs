#include<stdio.h>

int DigitDif(int iNo)        //N
{
    int iCnt = 0;
    int iDigit = 0;
    int EvenSum = 0;
    int OddSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }


    while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit%2 == 0)
            {
                EvenSum = EvenSum + iDigit;
            }
            else
            {
                OddSum = OddSum + iDigit;
            }
            iNo = iNo/10;
        }
    return (EvenSum-OddSum);
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue1);

    iRet = DigitDif(iValue1);

    printf("The Difference is : %d\n", iRet);

    return 0;
}