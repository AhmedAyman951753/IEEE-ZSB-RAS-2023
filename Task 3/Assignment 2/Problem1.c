#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
    char day[10];
    char month[10];
    char year[10];
}s1 , s2;

int main()
{
    printf("Enter the first date : ");
    scanf("%s %s %s" , &s1.day , &s1.month , &s1.year);
    printf("Enter the second date : ");
    scanf("%s %s %s" , &s2.day , &s2.month , &s2.year);
    int var1 = strcmp(s1.day , s2.day);
    int var2 = strcmp(s1.month , s2.month);
    int var3 = strcmp(s1.year , s2.year);
    if (var1 == 0 && var2 == 0 && var3 == 0)
    {
        printf("The two dates are equal");
    }
    else
    {
        printf("The two dates are not equal");
    }
    return 0;
}