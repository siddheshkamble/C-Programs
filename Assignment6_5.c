#include<stdio.h>

int Percentage(float fNo1, int iNo2)
{
    float fAns = 0.0f;
    fAns = (fNo1/iNo2)*100;
    return fAns;
}

int main()
{
    float fValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Obtained Marks :\n");
    scanf("%f", &fValue1);

    printf("Enter Total Marks:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(fValue1, iValue2);

    printf("Percentage is : %f\n", fRet);

    return 0;
}


