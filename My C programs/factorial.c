#include<stdio.h>
int factorialfun(int n);
void main()
{	
	int fac,ans;
	 printf("Enter the no. whose factorial is to be found\n");
	 scanf("%d",&fac);
	 ans=factorialfun(fac);
	 if (ans==0)
	 		printf("The factorial cant be computed No. is negative");
	 
	 else
	 printf("The answer is %d\n",ans );
}

int factorialfun(int n)
{
	
	if (n<0)
		return 0;
	else if (n==0)
	{
		return 1;
	}
	else
		return(n*factorialfun(n-1));
	
}