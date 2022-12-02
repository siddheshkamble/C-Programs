#include<stdio.h>

void Pattern(int iValue)        //2N
{
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    Pattern(iNo);

    return 0;
}