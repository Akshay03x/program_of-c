#include<stdio.h>
void main()
{
    float maths,english,gujrati,physics,hindi,persentage;
    printf("mark of maths");
    scanf("%f",&maths);

    printf("mark of english");
    scanf("%f",&english);

    printf("mark of gujrati");
    scanf("%f",&gujrati);

    printf("mark of physics");
    scanf("%f",&physics);

    printf("mark of hindi");
    scanf("%f",&hindi);

    persentage=(maths+english+gujrati+physics+hindi)/5;
    printf("persentage=%.2f",persentage);
}
