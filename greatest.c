#include <stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    clrscr;
    printf("enter 3 numbers to check greatest number \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("a is the largest number");
        
    }
    else if(b<c)
    {
        printf("b is the largest number");
    }
     else
    {
        printf("c is the largest number");
    }
    getch();
}
