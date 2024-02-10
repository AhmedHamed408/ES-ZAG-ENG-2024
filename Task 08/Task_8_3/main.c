#include <stdio.h>
#include <stdlib.h>
#include "Headers.h"
int main()
{

    int Var;
    printf("Please Enter the value of var ");
    scanf("%d",&Var);
    printf("\n\n");

    Set_Bit(Var, 1);
    printf("the value of Set_Bit by \"1\" is %d \n",Var);


    Clr_Bit(Var, 0);
    printf("the value of Clr_Bit by \"0\" is %d \n",Var);

    Toggle_Bit(Var, 2);
    printf("the value of Toggle_Bit by \"2\" is %d \n",Var);


    return 0;
}
