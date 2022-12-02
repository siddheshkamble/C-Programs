#include<stdio.h>

double AreaOfCircle(float fRad)
{
    float fAns = 0.0;
    float PI = 3.14;

    fAns = PI * fRad * fRad;
    return fAns;
}

int main()
{
    float fValue = 0.0;
    double fRet = 0.0;

    printf("Enter the Radius\n");
    scanf("%f", &fValue);

    fRet = AreaOfCircle(fValue);
    printf("The Area of circle is :%lf\n", fRet);

    return 0;
}