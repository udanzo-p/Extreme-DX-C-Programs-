#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter the no. to be swap");
	scanf("%d%d",&a,&b);
        swap(a,b);
        printf("%d%d",a,b);
        }

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
    printf("%d%d",x,y);

}