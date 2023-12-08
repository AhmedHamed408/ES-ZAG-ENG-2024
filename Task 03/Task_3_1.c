#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter 5 numbers to check if the number that are divisible by 3\n");
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);

    if(a%3==0)
        printf("\n%d divisible by 3",a);

    if(b%3==0)
        printf("\n%d divisible by 3",b);

    if(c%3==0)
        printf("\n%d divisible by 3",c);

    if(d%3==0)
        printf("\n%d divisible by 3",d);

    if(e%3==0)
        printf("\n9%d divisible by 3",e);

    printf("\n");

    return 0;
}
