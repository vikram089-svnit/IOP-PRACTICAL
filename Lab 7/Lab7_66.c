#include<stdio.h>
int factorial(int n){
    int product=1;

    for(int i=1;i<=n;i++){
        product=product*i;
    }

    return product;
}

int nCr(int n,int r){

    int result= factorial(n)/(factorial(r)*factorial(n-r));

    return result;
}
int main()
{   int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);

    if(n<r){
        printf("Enter valid values!");
    }
    else{
        printf("The Value of %dC%d is : %d",n,r,nCr(n,r));
    }

    return 0;
}