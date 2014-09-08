#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Please enter midterm final:   ");
    scanf("%f",&b);
    scanf("%f",&a);
    c=a+b;
    if(((a>=20)&&(b>=30))||(c>=60))
    {
        printf("Result:passed with score: %.2f",c);
    }
    else
    {
        printf("Result:failed with score: %.2f",c);
    }
    return 0;
}
