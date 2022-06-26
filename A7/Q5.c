/*Write a program which accept number from user and return difference between summation of even digits and summation odd digits.
Input: 2395             1018         8440           5733
Output: -15(2-17)       6 (8-2)        16(16-0)      -18(0-18)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0,iSum1=0,iSum2=0,Diff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSum1=iSum1+iDigit;
        }
        else
        {
            iSum2=iSum2+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum1-iSum2;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d\n",iRet);
    return 0;
}