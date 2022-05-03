//program to display 5 to 1 on screen
// Output 5 4 3 2 1

#include<stdio.h>

void Display()
{
    int i=0;
    
    for(i=5;i>=1;i--)
    {
        printf("%d ",i);
    }
}

int main()
{
    Display();

    return 0;
}