#include<stdio.h>
    void main()
{
   int a,i=1,factorial=1;
    
    printf("enter any number");
    scanf("%d",&a);
    
    while(i<=a)
    {
        factorial=factorial*i;
    
            i++;
    }     
    printf("%d",factorial);
    
    
    
    
    
}
