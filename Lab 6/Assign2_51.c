#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n:");
    scanf("%d", &n);

    int a[n], reverse_a[n];

    printf("Enter %d Elements:", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n; j++)
    {
        reverse_a[j] = a[n - j - 1];
    }
    printf("Reversed Array\n");

    for (int k = 0; k < n; k++)
    {
        printf("%d", reverse_a[k]);
    }

    return 0;
}