#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int num =5;
    int *ptr_num = NULL ;

    printf("The value before is %d \n", num);

    ptr_num=&num;
    *ptr_num= 50;

    printf("The value after is %d \n", num);


    return 0;
}
