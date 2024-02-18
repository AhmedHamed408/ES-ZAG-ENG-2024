#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void subandsum(int *ptr_a , int *ptr_b ,int *sumresult ,int *subresult  );
int main()
{

int a ,b ,sumresult1 = 0 , subresult1 = 0 ;
printf("Enter the value of a : ");
scanf("%d",&a);

printf("Enter the value of b : ");
scanf("%d",&b);

subandsum(&a,&b,&sumresult1,&subresult1);

printf("result of summing =  %d \n", sumresult1);

printf("result of substraction =  %d \n", subresult1);

return 0;
}
void subandsum(int *ptr_a , int *ptr_b ,int *sumresult ,int *subresult  ){

*sumresult = *(ptr_a) + *(ptr_b) ;
*subresult = *(ptr_a) - *(ptr_b) ;


}
