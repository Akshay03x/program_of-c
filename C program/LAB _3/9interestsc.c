#include<stdio.h>
void main()
{
    float p,r,n,interest;
    printf("enter value of p");
    scanf("%f",&p);
    printf("enter value of r");
    scanf("%f",&r);
    printf("enter value of n");
    scanf("%f",&n);

        interest=(p*r*n)/100;
        printf("interest=%.2f",interest);
        
    
}
