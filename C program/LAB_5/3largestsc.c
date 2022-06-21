#include<stdio.h>
    void main()
    {
        int a,b;
        printf("enter your number a:");
        scanf("%d",&a);

        printf("enter value of b:");
        scanf("%d",&b);

        if(a>b)
        {
            printf("the given number %d is largest than %d",a,b);
        }


        if(a<b)

        {
            printf("the given number %d is largest than %d",b,a);
        }
}
