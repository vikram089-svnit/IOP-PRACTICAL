#include <stdio.h>

int main()
{
    int a[3][3];

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
    
    for (int i = 0; i < 3; i++)
    {  
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
           sum+=a[i][j];
        }
        printf("The sum of row %d = %d",i+1,sum);
        printf("\n");
    }



    return 0;
}