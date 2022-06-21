#include<stdio.h>
    void main()
    {
        int a,b,c;
        printf("enter your number a:");
        scanf("%d",&a);

        printf("enter value of b:");
        scanf("%d",&b);


         printf("enter value of c:");
        scanf("%d",&c);
            
        if((a>b)&&(a>c))
        {
            printf("the given number %d is largest than %d and %d",a,b,c);
        }


        if((b>a)&&(b>c))

        {
            printf("the given number %d is largest than %d and %d",b,a,c);
        }

        if((c>a)&&(c>b))

        {
            printf("the given number %d is largest than %d and %d",c,a,b);
        }
}
