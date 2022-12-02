#include<stdio.h>
#include<stdbool.h>

int GreaterNumber(int iValue)
{
    if(iValue > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0; 
    bool bRet = false;

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    bRet = GreaterNumber(iNo);

    if(bRet == true)
    {
        printf("The %d number is greater than 100\n", iNo);
    }
    else
    {
        printf("The %d number is smaller than 100\n", iNo);
    }

    return 0;
}