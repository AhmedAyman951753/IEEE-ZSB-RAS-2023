#include <stdio.h>
#include <stdlib.h>
int addition(int *n1, int *n2)
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}
int main()
{
    int i , j , sum;
    printf("Enter the first number :");
    scanf("%d" , &i);
    printf("Enter the second number :");
    scanf("%d" , &j);
    sum = addition(&i, &j);
    printf("\nThe sum of %d and %d is %d", i, j, sum);
    return 0;
}