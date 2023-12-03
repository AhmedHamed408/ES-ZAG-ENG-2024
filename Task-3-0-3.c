#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p;
    printf("Enter the number  \n");
    scanf("%d",&n);

    printf("Enter the Power for this number \n");
    scanf("%d",&p);

    printf("Result = %f ", pow(n, p));

    return 0;
}
