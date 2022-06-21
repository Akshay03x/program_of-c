#include<stdio.h>
#include<math.h>
    void main()
{

        float a,b,c,d,r1,r2,x,y;

        printf("enter value of a:");
        scanf("%f",&a);

        printf("enter value of b:");
        scanf("%f",&b);

        printf("enter value of c:");
        scanf("%f",&c);

        d=(b*b)-(4*a*c);

        if(d>0)

    {
        printf("amswer d>o than");

        r1=((-b+sqrt(d))/(2*a));
         r2=((-b-sqrt(d))/(2*a));
        printf("Root 1=%.2f and root 2=%.2f\n",r1,r2 );


    }

  if(d=0)

    {
        printf("amswer d=o than");

        r1=((-b)/(2*a));
         
        printf("Root 1= root2=%.2f\n",r1 );


    }

 if(d<0)

    {
        printf("amswer d<o than");

        x=-b/(2*a);
        y=sqrt(-d)/(2*a);
        printf("Root 1=%.2f+i%.2f\n",x,y );
        printf("Root 2=%.2f-i%.2f\n",x,y );


    }



}

