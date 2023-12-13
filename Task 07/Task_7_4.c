#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   printf("Enter Number of values : ");
   scanf("%d", &n);

   unsigned int UserPassIndex = 0;
   int arr[n];

   for (int i=0 ; i< n; i++ ){

        printf("Enter value %d : ",i+1);
        scanf("%d", &arr[i]);
     }



        printf("\nPlease wait ");
        for(UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
            printf(".");
            Sleep(1);
        }


        printf("\n");

     for ( int i=n-1 ; i >= 0 ; i--){
        printf("%d  ",arr[i]);
     }
    return 0;
}



