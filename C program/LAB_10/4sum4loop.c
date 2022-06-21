#include<stdio.h>
    void main()
{
   float i=1,sum=0,n;
    
    printf("enter number");    
    scanf("%f",&n);

    while(i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("sum=%.2f",sum);
}
