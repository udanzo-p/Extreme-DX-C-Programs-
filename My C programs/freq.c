#include<stdio.h>
int freq(int x[],int y);
void main()
{   
	printf("Enter the elements in array sequentially");
	int i,target,a[6],ans;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	printf("Enter target to be searched \n");
	scanf("%d",&target);	
	ans=freq(a,target);
	printf("The frequency is %d\n",ans );

}

int freq(int x[],int y)
{
	int i, count=0;
	for(i=0;i<6;i++)
		if(x[i]==y)
			count++;
	return count;
}