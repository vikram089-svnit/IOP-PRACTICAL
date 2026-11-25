#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, total, percentage;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Total = %f\n", total);
    printf("Percentage = %f", percentage);

    return 0;
}
