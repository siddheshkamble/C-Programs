#include<stdio.h>
#include<stdbool.h>

bool ZeroCheck(int iNo)        //N
{
    int iCnt = 0, iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                break;
            }
            iNo = iNo/10;
        }
    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue1 = 0;
    bool bRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue1);

    bRet = ZeroCheck(iValue1);

    if(bRet == true)
    {
        printf("Number contains zero\n");
    }
    else
    {
        printf("Number does not contain zero\n");
    }
    
    return 0;
}