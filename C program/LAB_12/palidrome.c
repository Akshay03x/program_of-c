#include<stdio.h>
void main()
{
	int n,i,x,sum=0,temp;

	printf("enter number");
	scanf("%d",&n);

	temp=n;
	for (; n>0;)
	{
		x=n%10;
		sum=sum*10+x;
		n=n/10;
	}
	if(temp==sum)
	{
	printf("%d is palidrome",temp);
	}
	else
	{
		printf("%d is not palidrome",temp);
	}












}
