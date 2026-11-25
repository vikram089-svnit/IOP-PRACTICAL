#include <stdio.h>

int main()
{
    int a[3][3], max, min;

    printf("Enter the Elements:");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    max = a[0][0];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("The Largest Number in Matrix is %d", max);
    printf("\n");
    
    min = a[0][0];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("The Smallest Number in Matrix is %d", min);

    return 0;
}