#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[100] , str2[100];
    printf("Enter a string : ");
    gets(str1);
    for(int i = 0 ; str1[i] != '\0' ; i++)
    {
        str2[i] = str1[i];
    }
    printf("The new string is : %s\n" , str2);
}