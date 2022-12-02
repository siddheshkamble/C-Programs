#include<stdio.h>

void Mult(int iValue)
{
    int iCnt = 0;
    int iMult = iValue;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        iMult = iValue * iCnt;

        printf("%d \t",iMult);
    }  
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    Mult(iNo);

    return 0;
}