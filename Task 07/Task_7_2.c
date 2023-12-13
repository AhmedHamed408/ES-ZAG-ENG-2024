#include <stdio.h>
#include <stdlib.h>



int main()
{
    int class1[10]={8,2,37,5,65,7,5,553,6,5};
    int class2[10]={1,2,3,5,455,7,5,5,6,5};
    int class3[10]={1,2,3,99,65,7,5,5,6,5};
    unsigned int UserPassIndex = 0;
    int sum=0 ;
    int countpass =0, countfail=0 , max , min ;
    max = min = class1[0];
        for (int i=0 ; i< 10; i++ ){

           if(class1[i]<50){
                countfail++;
            }
            else
                countpass++;

           if(class2[i]<50){
                countfail++;
            }
            else
                countpass++;

          if(class3[i]<50){
                countfail++;
            }
            else
                countpass++;


        if(class1[i] > max){
            max=class1[i];
        }
        else if(min > class1[i])
            min=class1[i];

        if(class2[i] > max){
            max=class2[i];
        }
        else if(min > class2[i])
            min=class2[i];

        if(class3[i] > max){
            max=class3[i];
        }
        else if(min > class3[i])
            min=class3[i];
        sum = sum + class1[i] + class2[i] + class3[i] ;
        }



            printf("Please wait ");

        for(UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
            printf(".");
            Sleep(100);
        }
        printf("\n\n1-Number of passed students is %d \n2-Number of Failed students is %d \n3-Highest grade is %d \n4-Lowest grade is %d \n5-Average grade is %d \n",countpass ,countfail ,max ,min ,sum/30 );




    return 0;
}



