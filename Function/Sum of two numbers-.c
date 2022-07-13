#include<stdio.h>
int sum(void);
void main()
{
	int s;
	s=sum();
	printf("sum=%d",s);
}
int sum()
{
	int a=5, b=5;
	return a+b;
}
