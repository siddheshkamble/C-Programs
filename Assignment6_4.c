#include<stdio.h>

int Multiplication(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    iAns = iNo1 * iNo2 * iNo3;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the 1st Value :\n");
    scanf("%d", &iValue1);

    printf("Enter the 2nd Value :\n");
    scanf("%d", &iValue2);

    printf("Enter the 3rd Value :\n");
    scanf("%d", &iValue3);

    iRet = Multiplication(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);

    return 0;
}