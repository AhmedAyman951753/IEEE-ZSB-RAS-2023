#include <stdio.h>
#include <stdlib.h>
int increment(int x)
{
    x++;
    return x;
}
void main()
{
    int (*ptr)(int);
    ptr = &increment;
    int num1;
    printf("Enter a number : ");
    scanf("%d" , &num1);
    int num2 = ptr(num1);
    printf("The value of x after increment is %d" , num2);
}