// write a program which accepts number from user and display its all non factors

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            printf("%d", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Value \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
