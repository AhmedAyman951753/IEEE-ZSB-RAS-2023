#include <stdio.h>
#include <stdlib.h>
#include "hellofun.c" // including the file of the function
extern void hellofun(); // import hellofun from its file
void fun(void)
{
    static int i = 5; // local variable
    i++;
    printf("value of i = %d\n" , i);
}
int main(void)
{ 
    auto int value; // the default of any local variable in c
    register int num = 5; // this variable is stored in the processor not in the memory
    fun();
    return 0;
}