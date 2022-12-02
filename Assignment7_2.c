#include<stdio.h>

void Pattern(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        printf("%d",iCnt);
    }  
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    Pattern(iNo);

    return 0;
}