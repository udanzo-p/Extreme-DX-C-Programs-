#include<stdio.h>
int bin(int , int , int []);
void main()
{
int n,i,target,index;
printf("enter the number of elements in array");
scanf("%d",&n); int a[n];
printf("enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the number u want to search");
scanf("%d",&target);

index=bin(n,target,a);
if(index==-1)
{
printf("number is not present");
}
else
printf("%d",index);
}

int bin(int n,int target, int b[])
{int middle,low=0,high=n-1;
while(low<=high)
{
middle=(low+high)/2;

if(b[middle]==target)
return middle;

else if(b[middle]>target)
high=middle-1;

else
low=middle+1;

}  return -1;}