#include<stdio.h>
float funratio(int x,int y,int z);
int fundifference(int q,int w);
void main()
	{
		int a,b,c;
		float ans;
		printf("Enter the no.s a,b,c respectively to compute \n");
		scanf("%d%d%d",&a,&b,&c);
		ans=funratio(a,b,c);
		if(ans==0)
			printf("Resut cant be computed");
		else
		    printf("The ratio is%f\n",ans);

	
	}
float funratio(int x,int y,int z)
	{
		if(fundifference(y,z))
			return(x/(y-z));
		else
			return 0.0;
	}
int fundifference(int q,int w)
	{
		if(q!=w)
			return (1);
		else
			return 0;
	}
