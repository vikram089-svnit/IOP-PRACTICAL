#include<stdio.h>

int main()
{
    int a[10],n,count=0;
    printf("Enter the Elements:");

    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the number to find:");
    scanf("%d",&n);

    for(int i=0;i<100;i++){
        if(a[i]==n){
            count++;
        }
    }

    printf("The Number %d is occured %d times in the list",n,count);
    return 0;
}