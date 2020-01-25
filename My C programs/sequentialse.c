#include<stdio.h>
void sequentialsearch(int n,int a[],int find);
void main()
{
	int n,i,target,ans;
	printf("Enter the no. of terms in array");
	scanf("%d",&n);
	int slist[n];
	printf("Enter the elments\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&slist[i]);

	}
	printf("Enter the target\n");
	scanf("%d",&target);
	ans=sequentialsearch(n,slist,target);
	printf("The index of searched no .is %d \n",ans);

}
void sequentialsearch(int n,int a[],int find)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		if(a[i]==find)
			return i;
		else
			return -1;
	}

}
