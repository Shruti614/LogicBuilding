/*Write a program which accept number from user and display its digits in reverse order.
Input: 2395             1018            -1018           9000
Output: 5               8               8               0
        9               1               1               0
        3               0               0               0
        2               1               1               9
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}