#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    unsigned int price;
    unsigned int quanty;
}item;
void get_item(item *ptr);
item first;

void print_item(item *ptr);

int main()
{
printf("To update item please, \n");

get_item(&first);
printf("\n\n");

printf("Update values of item\n");

print_item(&first);

printf("\n\n");

unsigned int total =first.price*first.quanty ;
printf("Value of the item = %i \n" ,total);


}
void get_item(item *ptr){
printf("Enter the name of item : ");
scanf("%s", &(ptr->name));

printf("Enter number of price : ");
scanf("%i", &(ptr->price));

printf("Enter number of quanty : ");
scanf("%i", &(ptr->quanty));
}
void print_item(item *ptr){
printf("name : %s \n",(ptr->name));
printf("price : %i \n", (ptr->price));
printf("quanty : %i \n", (ptr->quanty));
}
