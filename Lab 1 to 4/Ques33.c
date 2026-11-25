#include <stdio.h>

int main()
{
    int n, i, num, min;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    scanf("%d", &min);

    for(i = 1; i < n; i++)
    {
        scanf("%d", &num);

        if(num < min)
        {
            min = num;
        }
    }

    printf("Minimum = %d\n", min);

    return 0;
}