#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	printf("Enter the no.s to be swap respectively");

	scanf("%d%d",&a,&b);
        swap(&a,&b);
	printf("\nNow the new a & b are\n");
        printf("%d\n%d",a,b);
 }
 void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
    

}
