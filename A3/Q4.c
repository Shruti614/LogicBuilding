//Accept one character from user and convert case of that character
//Input: A          //Input: d
//Output:a          //Output:D
//ASCII : A=65  to get a=65+32=97   mhanje a=97
//asach capital sathi pan   b=98  for B=98-32=66  mhanje B=66


#include<stdio.h>

void DisplayConvert(char CValue)
{
    
    if((CValue>='a')&&(CValue<='z'))
    {
        printf("%c\n",CValue-32);
    }
    else if((CValue>='A')&&(CValue<='Z'))
    {
        printf("%c\n",CValue+32);
    }
    
}

int main()
{
    char cValue='\0';

    printf("Enter character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}