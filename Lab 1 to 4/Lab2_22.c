#include<stdio.h>
int main()
{
    float a,b;
    char operation;
    printf("Operation:\n + for Addition\n - for Subtraction\n * for Multiplication\n / for division\n");

    printf("Enter A Number:");
    scanf("%f",&a);

    printf("select the operation:");
    scanf(" %c" , &operation);

    printf("Enter the other Number:");
    scanf("%f",&b);

    switch(operation)
    {
        case '+': printf("Answer:%f",a+b);
        break;
        case '-': printf("Answer:%f",a-b);
        break;
        case '*': printf("Answer:%f",a*b);
        break;
        case '/': printf("Answer:%f",a/b);
        break;
    
    }   
        


    return 0;
}