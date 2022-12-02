#include<stdio.h>

void Line(int iValue)
{
    int iCnt = -iValue;

    for(iCnt = -iValue; iCnt<=iValue; iCnt++)
    {
        printf("%d",iCnt);
    }  
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    Line(iNo);

    return 0;
}