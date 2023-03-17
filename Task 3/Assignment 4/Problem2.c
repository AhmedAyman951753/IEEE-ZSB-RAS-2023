#include<stdio.h>
struct database
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
} object1;
int main()
{
    printf("The size of the union is : %d\n" , sizeof(struct database));
    printf("The size of the struct{shops} is : %d\n" , sizeof(struct shops));
    printf("The size of the struct{product_info} is : %d\n" , sizeof(struct product_info));
    printf("The size of the struct{category} is : %d\n" , sizeof(struct category));
    return 0;
    
    /*The size of union equal to size of largest member so, in problem 1 the output will be 16 bytes
    but in this problem we use struct instead of union so the processor takes 5 cycles (5*8 = 40 bytes) */
} 