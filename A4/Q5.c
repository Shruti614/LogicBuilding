//Write a program to accept number from user and return difference between summation of its factors and non-factors
//Input: 12                 10
//Output: -34(16-50)        -29(8-37)
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0,iSum1=0,iSum2=0;

    if(iNo<=0)
    {
        printf("Invalid number!!!!\n");
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum1=iSum1+iCnt;
        }
        else
        {
            iSum2=iSum2+iCnt;
        }
    }
    return iSum1-iSum2;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d\n",iRet);
    return 0;
}