// Write program which returns difference between
// Even factorial and Odd factorial of given number.

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;  
        }
        else
        {
            iOddFact = iOddFact * iCnt;  
        }
    }

    iDiff = iEvenFact - iOddFact;
    return iDiff;
}

// Time complexity : O(n)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}