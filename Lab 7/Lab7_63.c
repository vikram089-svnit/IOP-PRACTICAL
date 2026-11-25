#include <stdio.h>

void exchange(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    exchange(&x, &y);

    printf("After exchange:\n");
    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    return 0;
}