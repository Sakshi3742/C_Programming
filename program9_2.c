// Accept amount in US Dollar and return its corresponding value in Indian currency.
// Consider 1$ as 70 rupees.

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iRate = 70;      
    int iINR = 0;

    iINR = iNo * iRate; 

    return iINR;
}

// Time complexity : O(1)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}

