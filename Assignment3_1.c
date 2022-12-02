// Write a program which accepts one number from usesr and print that number of even numbers on screen

#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iNo; iCnt++)
    {
        int iRet = 0;
        iRet = 2*(1+iCnt);
        printf("%d", iRet);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}
