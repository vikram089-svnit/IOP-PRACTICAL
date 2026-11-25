#include <stdio.h>

int main()
{
    int i, n = 0, sum = 0;

    while (n >= 0)
    {
        sum = sum + n;

        printf("Enter a Value:");
        scanf("%d", &n);
    }

    printf("The Sum of All values is %d", sum);

    return 0;
}