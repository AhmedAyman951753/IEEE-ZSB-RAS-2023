#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i , j;
    int array[] = {1 , 2 , 3 , 1 , 4 , 2 , 3 , 5};
    for (i = 0 ; i < (sizeof(array)/sizeof(array[0])) ; i++)
    {
        int counter = 0;
        for (j = 0 ; j < (sizeof(array)/sizeof(array[0])) ; j++)
        { 
                   
            if (array[i] == array[j] && i != j)
            {
                counter = 1;
            }           
        }
        if (counter == 0) printf("%d is a unique number\n" , array[i]);        
    }
     return 0;
}