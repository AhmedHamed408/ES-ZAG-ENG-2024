#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define index 8
   float averege( int avgarr[] );

int main()
{

    int N = 8 ;
    int arr[] = {8 , 5 , 6 , 7 , 8 ,9 , 4 , 8 };
    float avgresult = 0 ;


 avgresult =  averege(arr[index]) /N;
    return 0;
}



float averege( int avgarr[] )
{
    float resault =0;

    if (avgarr == 0)
    {
        resault = 0 ;
    }
    else
    {
        resault = (float)avgarr + averege(avgarr[index-1]);
    }

    return resault;
}
