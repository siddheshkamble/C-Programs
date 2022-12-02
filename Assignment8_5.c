#include<stdio.h>

int Table(int iValue)
{
    int iCnt = 0;
    int iTable = 1;

    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iValue * iCnt;
        printf("%d\n", iTable);
    }
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    Table(iNo);
    return 0;
}