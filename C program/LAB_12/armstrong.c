#include<stdio.h>
void main()
{
	int n,x,sum=0,temp;

	printf("enter number\n");
	scanf("%d",&n);
	temp=n;
	for (;n>0;)
	{
		x=n%10;
		sum=sum+x*x*x;
		n=n/10;
	}

	if(sum==temp)
	{
		printf("%d is armstrong",temp);
	}
	else
	{
		printf("%d is not armstrong",temp);
	}






}