#include<stdio.h>
void main()
{
    int seconds,hour,minutes,seconds1;

    printf("seconds=\n");
    scanf("%d",&seconds);

   
    hour=(seconds)/3600;
    minutes=(seconds)%3600/60;
    seconds1=(seconds)%3600%60;

    printf("hour=%d,minutes=%d,seconds1=%d",hour,minutes,seconds1);

}                        
