#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int max_length , frequency[100] = {0} , max_freq = 0 , i;
    char max_repeated;
    printf("Enter the length of your name :");
    scanf("%d" , &max_length);
    char *name = (char *) malloc(max_length * sizeof(char));
    printf("Enter your name :");
    getchar();
    gets(name);
    printf("Your name is : %s" , name);
    for(i = 0; name[i] != '\0'; i++)
    {
        frequency[(char)name[i]]++;
    }
    for(i = 0 ; i < 100 ; i++)
    {
        if(frequency[i] > frequency[max_freq])
        {
            max_freq = i;
        }
    }
    printf("\nThe most repeated character is '%c' with frequency %d\n", max_freq, frequency[max_freq]);
    free(name);
    return 0;
    }
    
    
    

