#include<stdio.h>
int main()
{
    float Y,x,n;  
    
    printf("Enter the value of x:");
    scanf("%f",&x);
    
    printf("Enter the value of n:");
    scanf("%f",&n);



    if (n==1)
    {
        Y=1+x;
        printf("Y=%f",Y);   
    }

    else if(n==2)
    {
        Y=1+(x/n);
        printf("Y=%f",Y);
    }
    else if(n==3)
    {
        Y=1+(x*x*x);
        printf("Y=%f",Y);
    }
   

    else
    {
        Y=1+(n*x);
        printf("Y=%f",Y);
    }


    return 0;
}