#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter the no. as a&b to be swap respectively");
	scanf("%d%d",&a,&b);
        swap(a,b);
 }

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
    printf("\nThe swapped no.s are\n%d\n%d",x,y);

}
