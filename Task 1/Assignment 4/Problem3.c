#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[100] , str2[100];
    int i = 0 , flag = 0;
    printf("Enter two strings :\n");
    gets(str1);
    gets(str2);
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == str2[i] && str1[i] != '\0' && str2 != '\0')
        {
            flag = 1;
        }
        else if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
 
    if (flag == 1)
    {
        printf("These strings are equal");
    }
    else if (flag == 0)
    {
        printf("These strings are not equal");
    }
    return 0;
}