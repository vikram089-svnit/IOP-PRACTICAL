#include<stdio.h>
int main()
{
    int i,a,b,result;
    printf("Enter the base:");
    scanf("%d", &a);
    
    printf("Enter the power:");
    scanf("%d", &b);
    
    result=1;
   
    for(i=1;i<=b;i++)
   {
        result=result*a;
    }
        printf("a^b=%d",result);
        
        
        return 0;
    }
   




