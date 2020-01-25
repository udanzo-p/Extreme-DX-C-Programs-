#include<stdio.h>
int largeno(int b[]);
int main()
{
	int i,a[5],ans;
	printf("Enter values in the array\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	ans=largeno(a);
	printf("\nLargest no. in the array is %d",ans);
}
int largeno(int b[])
{
	int i,max;
	max=b[0];
	for(i=0;i<5;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
}
	return max;
}
