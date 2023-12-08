#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x,y,z;

    printf("Enter 3 Numbers\n");
    
        printf("\n\tFirst Number: ");
        scanf("%d",&x);

        printf("\tSeconed Number: ");
        scanf("%d",&y);

        printf("\tThird Number: ");
        scanf("%d",&z);
        
        
        int min , max ;
         if (x < y && x < z) {
            min = x;
         } else if (y < z) {
            min = y;
        } else {
            min = z;
        }


        if (x > y && x > z) {
            max = x;
        } else if (y > z) {
            max = y;
        } else {
            max = z;
     }

    printf("\n\t\tMaximum Number: %d\n", max);
    printf("\t\tMinimum Number: %d\n", min);


}
