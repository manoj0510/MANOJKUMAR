#include <stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();
    printf("enter a number to check positive or negative");
    scanf("%d",&n);
    if(n<0)
    {
        printf("the number is negative");
        
    }
    else if(n>0)
    {
        printf("the number is positive");
    }
    else
    {
        printf("the number is zero");
    }
    getch();
}
