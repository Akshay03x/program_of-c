#include<stdio.h>
    void main()
{
    
    int x,y,power=1,i=1;

    printf("enter cofficent and power");
    scanf("%d%d",&x,&y);
    
        while(i<=y)
        {
            power=power*x;
            i++;
        }        
                     
        printf("power:%d",power);

}

