#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1;
    char *ptr2;
    long long *ptr3;
    printf("ptr1 = %d\n" , ptr1);
    ptr1++;
    printf("ptr1++ = %d\n" , ptr1);
    printf("ptr2 = %d\n" , ptr2);
    ptr2++;
    printf("ptr2++ = %d\n" , ptr2);
    printf("ptr3 = %d\n" , ptr3);
    ptr3++;
    printf("ptr3++ = %d\n" , ptr3);
    return 0;
}

//As shown in ptr1 below, its value is 16 and as the int data type has a size of 4 byte so, the value of ptr1++ is 16 + 4 = 20
//As shown in ptr2 below, char data type has a size of 1 byte so, the value of ptr2++ is +1 of ptr2 
//As shown in ptr3 below, its value is 54 and as the long long data type has a size of 8 byte so, the value of ptr3++ is 54 + 8 = 62