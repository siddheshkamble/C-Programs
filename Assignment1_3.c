// Programs on print 5 to 1 on screen

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 5;

    for(iCnt = 5; iCnt>=1; iCnt--)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    Display();

    return 0;
}