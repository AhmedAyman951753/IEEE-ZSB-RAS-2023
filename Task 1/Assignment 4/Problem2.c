#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[] = "Ahmed";
    printf("The string after seperation :\n");
    for (int i = 0 ; string[i] != '\0' ; i++)
    {
        printf("(%c)\n" , string[i]);
    }
    return 0;
}