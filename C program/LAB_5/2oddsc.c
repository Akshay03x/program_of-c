#include<stdio.h>
    void main()
    {
        int a;
        printf("enter number :");
        scanf("%d",&a);

        if((a%2)!=0)
        {
            printf("the given number%d is odd",a);
        }


        if((a%2)==0)

        {
            printf("the given number%dis even",a);
        }
}
