#include<stdio.h>
#include <stdlib.h>
typedef struct 
{
    int real;
    int imag;
}complex;

void complex_adding(complex num1,complex num2)
{
    int real_part = num1.real + num2.real;
    int imag_part = num1.imag + num2.imag;
    complex result = {real_part , imag_part};
    if(imag_part >= 0)
    {
        printf("The sum is : %d + %di " , result.real , result.imag);
    }
    else if (imag_part < 0)
    {
        printf("The sum is : %d - %di " , result.real , -result.imag);    
    }
}

int main()
{
    complex num1 ={6 , -3};
    complex num2 ={4 , 2};
    complex_adding(num1 , num2);
    return 0;
}