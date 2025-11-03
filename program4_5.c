// Accept number from user and return difference between summation of all its factors and non factors.

#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iFact = 0, iNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iFact = iFact + i; 
        }
        else
        {
            iNonFact = iNonFact + i;
        }
    }
    return iFact - iNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}
