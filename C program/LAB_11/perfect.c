#include<stdio.h>
void main()
{
	int n,i,sum=0;

	printf("enter number\n");
	scanf("%d",&n);

	for (int i = 1; i < n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
	}
		if(sum==n)
		{
			printf("%d is perfect",n);
		}
}
