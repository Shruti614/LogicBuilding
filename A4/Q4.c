//Write a program which accept number from user and display its non-factors
//Input:12
//Output:50  (5+7+8+9+10+11)
//Input: 10
//Output: 37(3+4+6+7+8+9)

//Write a program which accept number from user and display its non-factors
//Input:12
//Output:5 7 8 9 10 11

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0,iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
           iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d\n",iRet);

    return 0;
}