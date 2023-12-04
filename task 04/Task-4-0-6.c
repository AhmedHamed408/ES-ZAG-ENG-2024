#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D, M;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);


    M = A * B * C * D;


    int R = M % 100;

    printf("The last two digits of the product is : %02d \n", R);

    return 0;
}

