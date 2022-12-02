#include<stdio.h>
#include<stdbool.h>

int CheckNumber(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0; 
    bool bRet = false;

    printf("Enter the 1st Value :\n");
    scanf("%d", &iValue1);

    printf("Enter the 2nd Value :\n");
    scanf("%d", &iValue2);

    bRet = CheckNumber(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}