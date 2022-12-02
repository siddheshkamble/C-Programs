#include<stdio.h>

void CheckNum(int iValue)
{

    if(iValue<50)
    {
        printf("Small\n");
    }
    else if(iValue>50 && iValue<100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iNo = 0; 

    printf("Enter the Value :\n");
    scanf("%d", &iNo);

    CheckNum(iNo);

    return 0;
}