// Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A')&&(cValue <= 'Z'))
    {
        cValue = cValue + 32;
    }
    else if((cValue >= 'a')&&(cValue <= 'z'))
    {
        cValue = cValue - 32;
    }
    printf("Output character : %c\n",cValue);
}
int main()
{
    char cValue;

    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}