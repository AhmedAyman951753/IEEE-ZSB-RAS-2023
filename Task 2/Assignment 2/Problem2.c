#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[] = {2 , 4 , 6 , 8 , 10};
    int *ptr = array;
    for (int i = 0 ; i < (sizeof(array) / sizeof(array[0])) ; i++)
    {
        printf("%d " , ptr[i]);
    }  
}

//We can write in for this code : printf("%d " , *(ptr + i));