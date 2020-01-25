#include<stdio.h>
void main()
{
	int n,sum=1,i;
	printf("Enter the no. whose factorail is required\n");
	scanf("%d",&n);
	for (int i = n; i > 0; i--)
	{
		sum=sum*i;
	}
	printf("The factrial of %d is %d\n",n,sum);
	
}