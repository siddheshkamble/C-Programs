// Write a program which accepts one number from usesr and print even factors of that number

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
        printf("%d", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}

