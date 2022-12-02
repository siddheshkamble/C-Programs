#include<stdio.h>

double AreaChange(float fNo)
{
    double dAns = 0.0;

    dAns = 0.0929 * fNo;

    return dAns;
}

int main()
{
    float fValue1 = 0.0;
    double dRet = 0.0f;

    printf("Area in square feet\n");
    scanf("%f", &fValue1);

    dRet = AreaChange(fValue1);
    printf("Area in square meter is : %lf\n", dRet);

    return 0;
}

