#include <stdio.h>
#include <stdlib.h>
void frequency(int array[] , int length)
{
    int i , j , counter;
    int freq[100];
    for (i = 0 ; i <= length ; i++)
    {
        counter = 1;
        for (j = i + 1 ; j <= length ; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = counter;
        }
    }
    for(i = 0 ; i <= length ; i++)
    {
        if (freq[i] != 0)
        {
            printf("The frequency of %d is %d times\n\n" , array[i] , freq[i]);
        }        
    }
}
int main()
{
    int array[] = {1 , 2 , 4 , 5 , 2 , 3 , 1 , 4 , 3 , 1};
    int length = (sizeof(array) / sizeof(array[0]) - 1);
    frequency(array , length);
    return 0;
}