// Accept number from user and display its factors in decreasing order.

#include<stdio.h>

void FactRev(int iNo)
{
    for(int i = iNo/2; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf(" %d ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}