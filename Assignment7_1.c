#include<stdio.h>

void Pattern(int iValue)
{
    int iCnt = 0;
    
    if(iValue = -iValue)
    {
        -iValue == iValue;
    }

    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        printf("$\t*\t");
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
