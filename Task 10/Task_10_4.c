#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    int factorial( int factnum);

int main()
{

    int num;
    int Resault ;

    printf("enter the number = ");
    scanf("%d",&num);



    int factresult = factorial(num);
    printf("the factorial is = %i \n",factresult );

    return 0;
}



int factorial( int factnum)
{
    int resault =0;

    if (factnum == 0)
    {
        resault = 1;
    }
    else
    {
        resault = factnum * factorial(factnum - 1);
    }

    return resault;
}
