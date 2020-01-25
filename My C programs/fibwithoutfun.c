#include<stdio.h> 
int main () 
{ 
  int n, a = 0, b = 1, c, i; 
  printf("Enter the term of fib series\n");
  scanf("%d",&n);
  if( n == 1) 
    printf("Answer is%d\n",a);
    else
   { 
    for (i = 2; i <= n; i++) 
      { 
        c = a + b; 
        a = b; 
        b = c; 
      } 
  printf("Answer is %d", c);
  }
} 
  