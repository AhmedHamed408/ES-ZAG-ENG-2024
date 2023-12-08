#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char y;
    int bit_num;
    int func_id;

    printf("Enter an unsigned char number : ");
    scanf("%hhu", &y);

    printf("Enter the bit number : ");
    scanf("%d", &bit_num);

    printf("\n1-Set bit function\n2-Clear bit function\n3-Toggle bit function\n4-Read bit function\n");
    printf("\nEnter the number of operator you want to do : ");


    scanf("%d",&func_id);





    switch(func_id)
    {
        case  1:
            y = y |(1 << bit_num);
            printf("Number after setting bit %d: %hhu\n", bit_num, y);
        break;

        case  2:
            y = y & ~(1 << bit_num);
            printf("Number after clearing bit %d: %hhu\n", bit_num, y);
        break;

        case  3:
            y = y ^(1 << bit_num);
            printf("Number after toggling bit %d: %hhu\n",bit_num, y);
        break;

        case  4:
        y=(y >> bit_num) & 1;
            printf("Bit %d value in number: %d\n",bit_num, y);
        break;

        default:
            printf("Enter correct number from 1 to 4\n");
    }


    return 0;
}



