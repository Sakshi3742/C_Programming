// Accept total marks and obtained marks from user and calculate percentage.

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if(iTotal == 0)
    {
        return 0.0;
    }

    float fResult = 0.0;
    fResult = ((float)iObtained / (float)iTotal) * 100;
    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter Obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}