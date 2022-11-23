#include<stdio.h>
    void main()
{

        float bs,hra,da,gs;

        printf("enter salary:");
        scanf("%f",&bs);

        if((bs>=10000)&&(bs<20000))
      {  
        hra=bs*0.20;
        da=bs*0.80;
        gs=da+bs+hra;
        }

         if((bs>=20000)&&(bs<30000))
      {  
        hra=bs*0.25;
        da=bs*0.90;
        gs=da+bs+hra;
        }

     if(bs>=30000)
      {  
        hra=bs*0.30;
        da=bs*0.95;
        gs=da+bs+hra;
        }

        printf("your gross salry is=%.2f",gs);

        

}
