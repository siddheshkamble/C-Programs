#include<stdio.h>

double AreaOfRectangle(float fWidth, float fHeight)
{
    float fAns = 0.0;

    fAns = fWidth * fHeight;
    return fAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double fRet = 0.0;

    printf("Enter the Width\n");
    scanf("%f", &fValue1);

    printf("Enter the heigh\n");
    scanf("%f", &fValue2);

    fRet = AreaOfRectangle(fValue1, fValue2);
    printf("The Area of rectangle is :%lf\n", fRet);

    return 0;
}