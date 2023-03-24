#include<stdio.h>
#include <stdlib.h>
#define Function Ascending_order
#ifdef Function
#endif
void Ascending_order()
{
    int arr[5] ,var;
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter number %d : " , i+1);
        scanf("%d" , &arr[i]);
    }
    for(int j = 0 ; j < 5 ; j++)
    {
        for(int k = j+1 ; k < 5 ; k++)
        {
            if (arr[k] < arr[j])
            {
                var = arr[j];
                arr[j] = arr[k];
                arr[k] = var;
            }
        }
    }
    printf("Numbers after arranging in ascending order : ");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , arr[i]);
    }
}
void Descending_order()
{
    int arr[5] ,var;
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter number %d : " , i+1);
        scanf("%d" , &arr[i]);
    }
    for(int j = 0 ; j < 5 ; j++)
    {
        for(int k = j+1 ; k < 5 ; k++)
        {
            if (arr[k] > arr[j])
            {
                var = arr[j];
                arr[j] = arr[k];
                arr[k] = var;
            }
        }
    }
    printf("Numbers after arranging in Descending order: ");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , arr[i]);
    }
}

int main()
{
    Function();
    return 0;
}