#include<stdio.h>

int main()
{
    int a[3][3];

    printf("Enter The Elements of A Matrix:");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int temp;

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
           
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
         printf("\n");
        }

    
    return 0;
}