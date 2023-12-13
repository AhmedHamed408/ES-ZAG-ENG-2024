#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter Number of values : ");
   scanf("%d", &n);
   int sum =0;
   unsigned int UserPassIndex = 0;
   int arr[n];

   for (int i=0 ; i< n; i++ ){

        printf("Enter value %d : ",i+1);
        scanf("%d", &arr[i]);
     }
     for (int i=0 ; i< n; i++ ){
        sum+=arr[i];
     }


     printf("\nPlease wait ");
        for(UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
            printf(".");
            Sleep(100);
        }
     printf("\n\nThe sum = %d \n", sum);


    return 0;
}



