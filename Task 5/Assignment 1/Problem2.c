#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1 = (int *) malloc(5 * sizeof(int));
    int *ptr2 = (int *) calloc(5 , sizeof(int));
    int *ptr3 = (int *) malloc(10 * sizeof(int));
    
    //Scanning the values of malloc function:-
    printf("Enter the elements of the malloc function :\n");
    for (int i = 0 ; i < 5 ; i++)
    {
        scanf("%d" , &ptr1[i]);
    }

    //Printing the values of malloc function:-
    printf("The elemnts by malloc function : ");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , ptr1[i]);
    }
    
    //Scanning the values of calloc function:-
    printf("\nEnter the elements of the calloc function :\n");
    for (int i = 0 ; i < 5 ; i++)
    {
        scanf("%d" , &ptr2[i]);
    }
    
    //Printing the values of calloc function:-
    printf("The elemnts by calloc function : ");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , ptr2[i]);
    }
    
    //Scanning the values of malloc function:-
    printf("\nEnter the elements of the calloc function :\n");
    for (int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &ptr3[i]);
    }
    
    //Printing the values of calloc function:-
    printf("The elemnts by calloc function : ");
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d " , ptr3[i]);
    }

    printf("\n");
    free(ptr2);
    free(ptr3);
    return 0;
}
/*Allocating bigger space in the memory by dynamic
allocating will make stack overflow on the memory.*/