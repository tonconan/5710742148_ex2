#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;

    printf("Put a integer1:  ");
    scanf("%d",&a);
    printf("Put a integer2:  ");
    scanf("%d",&b);
    c=b-a;
    x=a-b;
    if(c>=0)
    {
         printf(" |integer1-integer2|=   %d",c);
    }
    else if (x>0)
    {
        printf(" |integer1 - integer2|= %d",x);
    }
    return 0;
}
