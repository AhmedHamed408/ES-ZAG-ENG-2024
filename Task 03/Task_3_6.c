#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,k,min,max;

    printf("Enter the No of numbers ");
    scanf("%d",&N);

    printf("Enter a number: ");
    scanf("%d",&min);

    N=N-1;

    max=min;

    for(i=1;i<=N;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&k);

        if(k>max)
            max =k;

        else if(k<min)
            min =k;
    }
    printf("\n\tMaximum number is %d \n\tMinimum number is %d\n",max,min);
    return 0;
}
