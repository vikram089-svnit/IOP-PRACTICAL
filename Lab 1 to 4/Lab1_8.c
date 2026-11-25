#include <stdio.h>

int main()
{
    int seconds, days, hours, minutes, remaining;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    days = seconds / 86400;
    remaining = seconds % 86400;

    hours = remaining / 3600;
    remaining = remaining % 3600;

    minutes = remaining / 60;
    printf("%d Days %d Hours %d Minutes", days,hours,minutes);

   

    return 0;
}