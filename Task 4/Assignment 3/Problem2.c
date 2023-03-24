#include <stdio.h>
#include <stdlib.h>
#define num1 10
#define num2 5
#define Add(x , y) x + y
#define Sub(x , y) x - y
#define operation Sub
#if (!defined operation || !defined num1 || !defined num2)
#warning "check your inputs and definitions!"
#endif
int main()
{
printf("The result of the defined operation is : %d\n" , operation(num1 , num2));
return 0;
}