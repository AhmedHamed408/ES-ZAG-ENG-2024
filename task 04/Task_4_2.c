#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char c;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter character: ");
    scanf(" %c", &c);

    if (num % 2 == 0)
    {
        printf("Result: %c\n", c);
    }
     else
        {
        if (c >= 'a' && c <= 'z')
            {
            printf("Result: %c\n", c - 32);
        }
        else if (c >= 'A' && c <= 'Z') {
            printf("Result: %c\n", c + 32);
        }
        }

    return 0;
}
