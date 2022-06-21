#include<stdio.h>
    void main()
{

    int a,i=1;

    printf("enter any number");
    scanf("%d",&a);

    while(i<=a)
    {
        if(a%i==0)
        {
            
        printf("%d\n",i);
        }
        i++;
    }
}
