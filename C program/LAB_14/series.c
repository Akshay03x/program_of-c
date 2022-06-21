#include<stdio.h>
void main()
{
	int i,j,x;
	float sum=1,temp,fact,pow;

	printf("enter x: \n");
	scanf("%d",&x);

	for (int i = 1; i <=2; i++)
	{
		pow=1;
		for (int j = 1; j <=i; j++)
		{
			pow=pow*x;
		}
		fact=1;
		for (int j = 1; j <=i; j++)
		{
			fact=fact*j;
		}
	
	temp=pow/fact;

	if (i%2==0)
	{
		sum=sum+temp;
	}
	else
	{
		sum=sum-temp;
	}

	}
	printf("%f",sum);
}