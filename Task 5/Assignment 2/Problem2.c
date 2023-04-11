#include <stdio.h>
#include <string.h>
#define stop_code "!!"

int main()
{
    char str[500];
    int unique[500] = {0} , length;
    printf("if you want to stop write (!!)");
    while (1)
    {
        printf("\nEnter the string : \n");
        fgets(str , sizeof(str) , stdin);
        str[strcspn(str , "\n")] = '\0';
        if (strcmp(str , stop_code) == 0)
        {
            break;
        }
        length = strlen(str);
        for (int i = 0 ; i < length ; i++)
        {
            unique[(char)str[i]] = 1;
        }
        printf("The unique characters : ");
        for (int i = 0 ; i < 500 ; i++)
        {
            if (unique[i] == 1)
            {
                printf("%c ", i);
                unique[i] = 0; 
            }
        }
    }
}