#include<stdio.h>
    void main()
{
        float a,b,c;

      

    


        
         printf("1. addition\n");
         printf("2. subtraction\n");
         printf("3. mutipalication\n");
         printf("4. division\n");

        printf ("enter your choise=");
        scanf("%f",&c);


          printf("enter value of a:");
        scanf("%f",&a);

        
        printf("enter value of b:");
        scanf("%f",&b);

        if(c==1)
{
        printf("your addition is=%.2f",a+b);
}        


            if(c==2)
{
        printf("your subtaraction is=%.2f",a-b);
}        
      

            if(c==3)
{
        printf("your mutiplication is=%.2f",a*b);
} 
       
    if(c==4)
{
        printf("your division is=%.2f",a/b);
}   
     
    if(c>4)
{
        printf("error");
}        
}
