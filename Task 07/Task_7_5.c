#include <stdio.h>
#include <stdlib.h>

int main()
{

    char arrinput[11];



   unsigned int UserPassIndex = 0;
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    int n;
   printf("Enter Number of values : ");
   scanf("%d", &n);

   printf("\nEnter values seperated by space : ");


   for (int i=0 ; i<n ; i++ ){

        scanf(" %c",&arrinput[i]);
     }

        printf("\nPlease wait ");
        for(UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++){
            printf(".");
            Sleep(70);
        }
    for (int i=0 ; i<n ; i++ )
    {

         if(arrinput[i] == '0')
        count0++;
        else if(arrinput[i] == '1')
        count1++;
        else if(arrinput[i] == '2')
        count2++;
        else if(arrinput[i] == '3')
        count3++;
        else if(arrinput[i] == '4')
        count4++;
        else if(arrinput[i] == '5')
        count5++;
        else if(arrinput[i] == '6')
        count6++;
        else if(arrinput[i] == '7')
        count7++;
        else if(arrinput[i] == '8')
        count8++;
        else if(arrinput[i] == '9')
        count9++;
        else
            continue;
     }

    printf("\n\n%d%d%d%d%d%d%d%d%d%d\n", count0,count1,count2,count3,count4,count5,count6,count7,count8,count9);


    return 0;
}

