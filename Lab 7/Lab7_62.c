#include<stdio.h>
void armstrong(int n){
    int temp=n,sum=0;

    while(n!=0){
        int digit=n%10;
        sum= sum + digit*digit*digit;
        n=n/10;
    }

    if(temp==sum){
        printf("Given Number is Armstrong Number.");
    }
    else{
        printf("Given Number is Not Armstrong Number.");
    }
}
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    
    armstrong(n);
    return 0;
}