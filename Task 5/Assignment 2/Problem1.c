#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
}time;

int main()
{
    printf("Enter the time in format [hh:mm:ss] : ");
    scanf("%d:%d:%d" , &time.hours , &time.minutes , &time.seconds);
    int TIME = time.hours * 3600 + time.minutes * 60 + time.seconds;
    printf("The time you entered is : %02d:%02d:%02d" , TIME / 3600 , (TIME % 3600) / 60 , TIME % 60);
    return 0;
}