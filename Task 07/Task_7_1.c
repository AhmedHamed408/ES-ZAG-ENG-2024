#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];

    for (int i=1 ; i<=10 ; i++ ){
        printf("Enter Value of %d : ", i);
        scanf("%d", &arr[i]);
    }

    int min , max ;
    min = max = arr[0];
    for (int i=1 ; i<=10 ; i++ ){
        if(max < arr[i]){
            max=arr[i];
        }
        else if(min > arr[i])
            min=arr[i];

    }
        printf("Maximum value is %d \nMinimum value is %d", max , min);


    return 0;
}



