// Accept one character from usesr and check vowel or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cValue)
{
    if(cValue == 'a','e','i','o','u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c It is Vowel\n", cValue);
    }
    else
    {
        printf("%c It is not Vowel\n", cValue);
    }

    return 0;
}


