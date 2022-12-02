#include<stdio.h>

void OddNumber(int iValue)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        if(iCnt%2 != 0)
        printf("%d \t",iCnt);
    }  
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    OddNumber(iNo);

    return 0;
}