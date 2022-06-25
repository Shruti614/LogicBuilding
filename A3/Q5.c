//Aaccept one character from user and check whether that character is vowel (a,e,i,o,u) or not.
//Input: E         //Output:TRUE        
//Input: d          //Output:FALSE
//ASCII : A=65  to get a=65+32=97   mhanje a=97
//asach capital sathi pan   b=98  for B=98-32=66  mhanje B=66CValue=''||


#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u'||
    CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}