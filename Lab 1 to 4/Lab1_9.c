#include <stdio.h>

int main()
{
    int hours, minutes, seconds, total;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    total = (hours * 3600) + (minutes * 60) + seconds;
    printf("Total Seconds = %d", total);


    return 0;
}