#include<stdio.h>
void main()
{
    float km,meter,ft,inch,cm;

    printf("enter km=");
    scanf("%f",&km);

    meter=km*1000;
    ft=meter*3.2805;
    cm=meter*100;
    inch=km*12;
    
    
    printf("feet=%.2f\n",ft);
      printf("metr=%.2f\n",meter);
      printf("cm=%.2f\n",cm);
      printf("inch=%.2f\n",inch);
    
}
