#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=10,y=15,z=2;

    int *p =&x;
    int *q =&y;
    int *r =&z;
    printf("x = %d \ny = %d\nz = %d\n",x,y,z);
    printf("-------------\np = 0x%X \nq = 0x%X \nr = 0x%X\n",p,q,r);
    printf("-------------\n*p = %d \n*q = %d \n*r = %d \n",*p,*q,*r);


    printf("-------------\nAfter swaping \n");

    r = p;
    p = q;
    q = r;

    printf("-------------\nx = %d \ny = %d\nz = %d\n",x,y,z);
    printf("-------------\np = 0x%X \nq = 0x%X \nr = 0x%X\n",p,q,r);
    printf("-------------\n*p = %d \n*q = %d \n*r = %d \n",*p,*q,*r);
    return 0;
}
