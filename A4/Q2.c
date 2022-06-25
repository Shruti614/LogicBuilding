//Write a program which accept number from user and display its factors in decreasing order
//Input:12
//Output: 6 4 3 2 1 
#include<stdio.h>

void FactRev(int iNo)
{
    int iFact=iNo/2;

    while(iFact>0)
    {
        if((iNo%iFact)==0)
        {
            printf("%d\n",iFact);
        }iFact--;
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}