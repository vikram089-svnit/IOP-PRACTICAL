#include <stdio.h>

int main()
{
    int num[10];
    int countpos = 0, countneg = 0, countzero = 0;

    printf("Enter 10 Elements:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            countpos++;
        }
        else if (num[i] < 0)
        {
            countneg++;
        }
        else
        {
            countzero++;
        }
    }
    printf("The Number of positive numbers are %d\n", countpos);
    printf("The Number of negative numbers are %d\n", countneg);
    printf("The Number of Zero numbers are %d\n", countzero);

    return 0;
}