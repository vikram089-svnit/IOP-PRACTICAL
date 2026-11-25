#include <stdio.h>

int main()
{
    int num[10];
    int counteven = 0, countodd = 0;

    printf("Enter 10 Elements:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("The Number of even numbers are %d\n", counteven);
    printf("The Number of odd numbers are %d\n", countodd);

    return 0;
}