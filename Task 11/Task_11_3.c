#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    unsigned int salary;
    unsigned int bonus;
    unsigned int deduction;
}data;
void get_data(data *ptr);
data first ={"Ahmed"};
data second ={"Amr"};
data third ={"Waleed"};


int main()
{

get_data(&first);

get_data(&second);

get_data(&third);

int total=first.bonus+first.deduction+first.salary+second.bonus+second.deduction+second.salary+third.bonus+third.deduction+third.salary;

printf("Total Value Needed is %i \n", total);
}


void get_data(data *ptr){
printf("Please Enter %s Salary : ",(ptr->name));
scanf("%i", &(ptr->salary));

printf("Please Enter %s Bouns : ",(ptr->name));
scanf("%i", &(ptr->bonus));

printf("Please Enter %s Deduction : ",(ptr->name));
scanf("%i", &(ptr->deduction));
}

