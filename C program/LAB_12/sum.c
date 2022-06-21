#include<stdio.h>
void main()
{
	int n,i,x,sum=0;

	printf("enter number");
	scanf("%d",&n);


	for (; n>0;)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}

	printf("%d",sum);













}
