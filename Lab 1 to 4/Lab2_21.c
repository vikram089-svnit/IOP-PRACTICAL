#include<stdio.h>
int main()
{
    float a,b;
    int operation;
    printf("Enter the number:\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for division\n");

    printf("Enter A Number:");
    scanf("%f",&a);

    printf("select the operation:");
    scanf("%d",&operation);

    printf("Enter the other Number:");
    scanf("%f", &b);

    switch(operation)
    {
        case 1: printf("Answer:%f",a+b);
        break;
        case 2: printf("Answer:%f",a-b);
        break;
        case 3: printf("Answer:%f",a*b);
        break;
        case 4: printf("Answer:%f",a/b);
        break;
    
    }   
        


    return 0;
}