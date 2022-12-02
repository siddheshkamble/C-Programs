// Write a program which accepts one number from uses and display factors in decreasing order

#include<stdio.h>

void RevFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt>=1; iCnt--)
    {
        if(iNo%iCnt == 0)
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

    RevFact(iValue);

    return 0;
}
