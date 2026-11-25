#include <stdio.h>

int main()
{
    float basic, da, hra, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    gross = basic + da + hra;
    printf("Gross Salary = %f", gross);


    return 0;
}