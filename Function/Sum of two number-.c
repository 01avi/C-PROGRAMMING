#include<stdio.h>
int sum(int,int);
void main()
{
	int x,y,s;
	printf("enter two values:-");
	scanf("%d%d",&x,&y);
	s=sum(x,y);
	printf("sum=%d",s);
}
int sum(int a,int b)
{
	int c=0;
	c=a+b;
	return c;
}

