#include<stdio.h>
int fibonacifun(int n);
void main()
{	
	int fib,ans;
	 printf("Enter the no. of term to be checked of fibonacci series \n");
	 scanf("%d",&fib);
	 ans=fibonacifun(fib);
	 if(ans<0)
		 printf("This cant be computed\n");
	 else
	 printf("The Fibonacci term of answer is %d\n",ans );
}

int fibonacifun(int n)
{	
	if (n==0&&n<1)
	{
		return -1;
	}
	else if (n==1)
		return 0;
	else if (n==2)
	{
		return 1;
	}
	else
		return(fibonacifun(n-1)+fibonacifun(n-2));
}
