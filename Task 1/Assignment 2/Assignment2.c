#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 1 , y = 2 , z = 3;
    int *p = &x , *q = &y , *r = &z , *num1 , *num2;
    printf("The value of x is %d\n" , x);
    printf("The value of y is %d\n" , y);
    printf("The value of z is %d\n" , z);
    printf("The address of x is %p\n" , p);
    printf("The address of y is %p\n" , q);
    printf("The address of z is %p\n" , r);
    printf("The value of x is %d\n" , *p);
    printf("The value of y is %d\n" , *q);
    printf("The value of z is %d\n" , *r);
    printf("\nSwapping pointers :-\n\n");
    num1 = r , num2 = p;
    r = num2 , p = q , q = num1;
    printf("The value of x is %d\n" , x);
    printf("The value of y is %d\n" , y);
    printf("The value of z is %d\n" , z);
    printf("The address of x is %p\n" , p);
    printf("The address of y is %p\n" , q);
    printf("The address of z is %p\n" , r);
    printf("The value of x is %d\n" , *p);
    printf("The value of y is %d\n" , *q);
    printf("The value of z is %d\n" , *r);
    return 0;
}