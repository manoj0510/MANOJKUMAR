#include <stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();
    printf("enter a number to check even or odd");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is even");
        
    }
     else
    {
        printf("the number is odd");
    }
    getch();
}
