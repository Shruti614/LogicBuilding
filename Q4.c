//Accept one number and check whether it is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckDivision(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL iRet=FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet=CheckDivision(iValue);

    if(iRet==TRUE)
    {
        printf("%d is divisible by 5\n",iValue);

    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }

    return 0;
}