#include <stdio.h>
#include <stdlib.h>

int main()
{
   char arr[50];
   printf("Enter sentence : ");
   gets(arr);

     for ( int i=0 ; i < 50 ; i++){
        if (arr[i]!= '\0')
     {
           if (arr[i]!= ' ')
                printf("%c",arr[i]);
            else printf("\n");
     }
     else
        break;
     }
return 0;
}

