#include<stdio.h>

void RevDigitsDisplay(int iNo)        //N
{
    int iCnt = 0, iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d\n", iDigit);
            iNo = iNo/10;
        }
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue1);

    RevDigitsDisplay(iValue1);

    return 0;
}