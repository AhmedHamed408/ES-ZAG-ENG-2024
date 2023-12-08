#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    int count = 0;

    printf("Enter an unsigned 32-bit integer: ");
    scanf("%u", &num);

    for (int i = 0; i < 32; i++)
        {
        if ((num >> i) & 1)
            {
            count++;
            }
        }

    printf("Number of 1's in the integer: %d\n", count);

    return 0;
}
