#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x = 0x4F3E2D1C;
    int *ptr = &x;
    ++*ptr;
    //This is the increase of the value of x by 1 
    printf("++*ptr = %d\n" , *ptr);   
    *ptr++;
    //This is the increase of x by 1 and the pointer will go to this increasing value , but won't take its value
    printf("*ptr++ = %d\n" , *ptr);
    *++ptr;
    //This is the increase of x by 1 and the pointer will go to the next element and take its value
    printf("*++ptr = %d\n" , *ptr);
}