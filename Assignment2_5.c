// Accept number from user and check weather number is even or odd  

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo1)
{
    if(iNo1 % 2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if(bRet == FALSE)
    {
        printf("%d Number is even\n", iValue);
    }
    else
    {
        printf("%d Number is odd\n", iValue);
    }

    return 0;
}


