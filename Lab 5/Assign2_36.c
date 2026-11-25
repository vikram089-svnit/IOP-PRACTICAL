#include<stdio.h>

int main()
{
    int num,n;

    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(int i=1; i<=n ;i++){
        num=65;

        for(int j=1;j<=i;j++){
           
            printf("%c",num);
            num++;
        }
        printf("\n");

    }

    return 0;
}