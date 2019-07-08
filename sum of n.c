#include <stdio.h>
#include<conio.h>

void main()
{
    int n,s=0;
    printf("enter no of times");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
        printf("%d",s);
    
    
    
    getch();
}
