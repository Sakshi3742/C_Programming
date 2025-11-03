// Accept number from user and print its number line.

#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for (i = -iNo; i <= iNo; i++)
    {
        printf("%d", i);

        if (i < iNo)
        {
            printf("  ");  
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}