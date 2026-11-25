#include<stdio.h>
void even_or_odd(int n){

    if(n%2==0){
        printf("The Given Number is Even");
    }
    else{
        printf("The Given Number is Odd");
    }
}
int main()
{   
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    even_or_odd(n);
    
    return 0;
}