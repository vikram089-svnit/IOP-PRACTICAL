#include <stdio.h>

int main()
{
    int i, n, count = 0;

    printf("Enter A Number:");
    scanf("%d", &n);

    if (n == 1 || n == 0)
    {
        printf("The Number is Neither Prime Nor Composite");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        printf("The Number is Composite");
    }
    else
    {
        printf("The Number is Prime");
    }

    return 0;
}