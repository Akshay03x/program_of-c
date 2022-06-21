#include<stdio.h>
void main()
{
    int second,insecond,hours,minuts;
    
    printf("enter second:");
    scanf("%d",&insecond);

    hours=(insecond/3600);
  

    minuts=(insecond%3600)/60;
    

    second=(insecond%3600)%60;

    printf("%d:%d:%d\n",hours,minuts,second);

}
