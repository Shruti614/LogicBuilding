////write a program to check whether given number is even or odd

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if((iNo%2)==0)
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
    BOOL bRet=FALSE;        

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
    if(bRet==TRUE)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;

}