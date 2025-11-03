// Find Even factorial of given number.

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

// Time complexity : O(n)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d", iRet);

    return 0;
}