#include<stdio.h>



   enum monthes {
   Jan =1,
   Feb,
   Mar,
   Apr,
   May,
   Jun,
   Jul,
   Aug,
   Sep,
   Oct,
   Nov,
   Dec
};

char arr[12][12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main()
{


for (enum monthes monthe = Jan; monthe <= Dec; monthe++) {
        printf("%s = %d\n",arr[monthe-1] , monthe);
    }




}
