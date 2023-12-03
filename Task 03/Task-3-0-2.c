#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of rows of Floyd's triangle to print \n");
    int k=0;
    int m,i,j;
    scanf("%d",&m);
    for (i=m; i>0; i--)
    {
        for(j=i; j<=m; j++)
            printf("%d ",++k);
        printf("\n");
    }

    return 0;
}
