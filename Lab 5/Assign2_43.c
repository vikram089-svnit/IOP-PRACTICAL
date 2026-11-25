#include<stdio.h>

int main()
{
    int num[10];
    int sum=0;
    
    printf("Enter 10 Elements:");

    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
   
    for(int i=0;i<10;i++){
        sum=sum + num[i] ;
    }
    printf("The Sum Of Elements = %d",sum);


    return 0;
}