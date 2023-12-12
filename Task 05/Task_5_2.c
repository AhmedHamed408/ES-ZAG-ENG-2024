/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            float flt = 123456.789;
          printf("%+010.2f" , flt);

  return 0;
}
*/
#include <stdio.h>

int main(void)
{
            while (1)
            {
                static int i =0 ;
                i += 5;
                if (!(++i % 10))
                {
                    break;
                }
            }




}
