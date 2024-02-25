#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
}time;
void get_time(time *ptr);
time first;
time Second;
int main()
{
printf("For First Time \n");

get_time(&first);

printf("For Second Time \n");
get_time(&Second);


unsigned int hours_diff    =0;
unsigned int minutes_diff =0;
unsigned int seconds_diff =0;

hours_diff = first.hours- Second.hours;
minutes_diff = first.minutes- Second.minutes;
seconds_diff = first.seconds- Second.seconds;
printf("\n\n");
printf("%i:%i:%i - %i:%i:%i = %i:%i:%i",first.hours,first.minutes,first.seconds,Second.hours,Second.minutes,Second.seconds,hours_diff,minutes_diff,seconds_diff);
printf("\n\n");


}
void get_time(time *ptr){
printf("Enter number of hours : ");
scanf("%i", &(ptr->hours));

printf("Enter number of minutes : ");
scanf("%i", &(ptr->minutes));

printf("Enter number of seconds : ");
scanf("%i", &(ptr->seconds));
}
