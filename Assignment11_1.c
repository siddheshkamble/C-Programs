#include<stdio.h>

void Range(int iStart, int iEnd)        //N
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the START Number :\n");
    scanf("%d", &iValue1);

    printf("Enter the END Number :\n");
    scanf("%d", &iValue2);

    Range(iValue1, iValue2);

    return 0;
}