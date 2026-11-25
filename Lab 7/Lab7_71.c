#include <stdio.h>

int length(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

int main()
{
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    int len = length(str);

    if (len > 0 && str[len - 1] == '\n')
        len--;

    printf("Length of string = %d", len);

    return 0;
}