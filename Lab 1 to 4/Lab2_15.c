#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, total, percentage;
    

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Total = %f\n", total);
    printf("Percentage = %f\n", percentage);

    if (percentage >= 85)
        printf("Division = First Division");
    else if (percentage >= 60)
        printf("Division = Second Division");
    else if (percentage >= 40)
        printf("Division = Third Division");
    else
        printf("Division = Fail");

    return 0;
}