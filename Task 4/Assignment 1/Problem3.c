#include<stdio.h>
#include <stdlib.h>
typedef int Integer_4;
typedef short Short_Integer_2;
typedef long Long_Integer_4;
typedef long long Long_Integer_8;
typedef float Float_4;
typedef double Double_8;
typedef char Char_1;

int main()
{
printf("The size of int data type is : %d bytes\n" , sizeof(Integer_4));
printf("The size of short data type is : %d bytes\n" , sizeof(Short_Integer_2));
printf("The size of long data type is : %d bytes\n" , sizeof(Long_Integer_4));
printf("The size of long long data type is : %d bytes\n" , sizeof(Long_Integer_8));
printf("The size of float data type is : %d bytes\n" , sizeof(Float_4));
printf("The size of double data type is : %d bytes\n" , sizeof(Double_8));
printf("The size of char data type is : %d bytes\n" , sizeof(Char_1));
return 0;
}