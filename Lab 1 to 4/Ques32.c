#include <stdio.h>

int main()
{
    int n, i, num;
    int max, second;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    scanf("%d", &max);
    second = max;

    for(i = 1; i < n; i++)
    {
        scanf("%d", &num);

        if(num > max)
        {
            second = max;
            max = num;
        }
        else if(num > second && num != max)
        {
            second = num;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d\n", second);

    return 0;
}