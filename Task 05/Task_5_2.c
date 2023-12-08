#include <stdio.h>
#include <stdlib.h>

int main(void)
{
unsigned int num, count = 0;
printf("Enter an integer number:\n");
scanf("%d", &num);
for (int i = 1; i <= num; i++)
{
    if (num % i == 0)
    count++;
}

if (count > 2)
    {
    printf("The number %d is not a prime number , Because He accepted to divid at more than %d numbers\n", num , count);
    }
else
    {
    printf("The number %d is a prime number\n ", num );
    }
}
