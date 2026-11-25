#include<stdio.h>
void palindrome(int n){
    int temp,sum=0;
    temp=n;

    while(n!=0){

        int digit = n%10;
        sum = sum*10 + digit;
        n= n/10;
    }

    if(temp==sum){
        printf("The Number is Palindrome");
    }

    else
        printf("The Number is Not Palindrome");
}
int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);

    palindrome(n);
    return 0;
}