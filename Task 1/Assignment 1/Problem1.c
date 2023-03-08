#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[] = {1 , 2 , 4 , 2 , 1 , 3 , 5 , 3 , 5 , 6 , 4};
    int counter = 0 , i , j;

    for (i = 0 ; i <= (sizeof(array)/sizeof(array[0])) ; i++)
    {
        for (j = i + 1 ; j <= (sizeof(array)/sizeof(array[0])) ; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
            }
        }
    }
    printf("The number of the duplicated elements is : %d" , counter);
    return 0;
}