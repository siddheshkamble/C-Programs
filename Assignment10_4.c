#include<stdio.h>

double TempChange(float fTemp)
{
    float fAns = 0.0;

    fAns = ((fTemp - 32) * (5/9));

    return fAns;
}

int main()
{
    float fValue1 = 0.0;
    double dRet = 0.0f;

    printf("Temperature in Fahrenheit \n");
    scanf("%f", &fValue1);

    dRet = TempChange(fValue1);
    printf("The temperature in degree celsius is : %lf\n", dRet);

    return 0;
}

