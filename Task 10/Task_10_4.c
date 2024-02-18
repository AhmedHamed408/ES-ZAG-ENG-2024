#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int factorial( int factnum);
    int num;
    int Resault ;

    printf("enter the number = ");
    scanf("%d",&num);



    int factresult = factorial(num);
    printf("the factorial is = %d1\n",factresult );

    return 0;
}



int factorial( int factnum)
{
    int Resault =0;

    if (factnum == 0)
    {
        Resault = 1;
    }
    else
    {
        Resault = factnum * factorial(factnum - 1);
    }

    return Resault;
}
