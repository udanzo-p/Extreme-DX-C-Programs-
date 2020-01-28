#include<stdio.h>
void selectionsort(int n,int a[] );
void main()
{
	int n,i;
	printf("Enter n");
	scanf("%d",&n);
	int list[n];
	printf("Enter the no. of Elements");
	for(i=0;i<n;i++)
		{
		scanf("%d",&list[i]);
		}
	selectionsort(n,list);
}
void selectionsort(int n,int a[])
{
	int pass,i, indexmin;
	for(pass=0;pass<n-1;pass++)
	{
		 indexmin=pass;
		for(i=pass+1;i<n;i++)
		{	
			
			if(a[i]<a[indexmin])	
			{
			indexmin=i;
			}
		}
			if(indexmin!=pass)
			{
			int t=a[pass];
			a[pass]=a[indexmin];
			a[indexmin]=t;
			}
			
	}
	printf("\nThe sorted array\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",a[i] );
	}
}
