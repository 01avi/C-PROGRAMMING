#include<stdio.h>
void sum(int a, int b)
{
	int sum=0;
	sum=a+b;
	printf("\nsum=%d\n",sum);
}
void main()
{
	sum(2,6);
	sum(6,6);
	sum(5,6);
}
