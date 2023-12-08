#include <stdio.h>
#include <stdlib.h>

int main()
{

int main()
{
    int num , revNum = 0, R;
    printf("Enter Number To reserve it _-_ :");
    scanf("%d",&num);

  while (num != 0) {
    R = num % 10;
    revNum = revNum * 10 + R;
    num = num / 10;
  }
  printf("\n\tReversed Number: %d\n", revNum);

    return 0;
}
