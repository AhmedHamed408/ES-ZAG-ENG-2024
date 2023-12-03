#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,i;
    int b=1;
    printf("Enter number A: ");
    scanf("%d",&A);

    for (i=1; i<=A; i++)
    {
        b=b*i;

    }
    printf("\n%d!=%d",A,b);

    return 0;
}

