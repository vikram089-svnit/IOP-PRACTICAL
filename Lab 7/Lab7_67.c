#include<stdio.h>
int maximum(int a[]){
        int max=a[0];
        for(int i=1;i<10;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        return max;
}
int main()
{
    int a[10];

    printf("Enter the 10 elements:");

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("The maximum no. in the list is %d",maximum(a));
    return 0;
}