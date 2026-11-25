#include <stdio.h>

int main()
{
    int n, i, a[100];
    int max, second;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    second = a[1];

    if(second > max)
    {
        int temp = max;
        max = second;
        second = temp;
    }

    for(i = 2; i < n; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second)
        {
            second = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", second);

    return 0;
}