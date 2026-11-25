
#include <stdio.h>

int main()
{
    int n, i, j;
    float fact;
    float sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = 1;

        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (float)i / fact;
    }

    printf("Sum = %f", sum);

    return 0;
}
