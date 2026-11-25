#include <stdio.h>

int main()
{
    float m, p, c, e, cm;

    printf("Enter Mathematics marks: ");
    scanf("%f", &m);

    printf("Enter Physics marks: ");
    scanf("%f", &p);

    printf("Enter Chemistry marks: ");
    scanf("%f", &c);

    printf("Enter Entrance Examination marks: ");
    scanf("%f", &e);

    cm = (m / 2) + (p / 2) + (c / 2) + e;
    printf("Cut-off Mark = %f", cm);


    return 0;
}