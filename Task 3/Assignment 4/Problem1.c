#include<stdio.h>
#include <stdlib.h>
union database
{
    struct shops
    {
        char *name;
        char *location;
    };
       struct product_info
    {
        int id;
        float price;
        int quantity;
    };
    struct category
    {
        int id_category;
        int products_num;
    };   
}object1;
int main()
{
    printf("The size of the union is : %d\n" , sizeof(union database));
    printf("The size of the struct{shops} is : %d\n" , sizeof(struct shops));
    printf("The size of the struct{product_info} is : %d\n" , sizeof(struct product_info));
    printf("The size of the struct{category} is : %d\n" , sizeof(struct category));
    return 0;
} 