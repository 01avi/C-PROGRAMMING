#include<stdio.h>
void sum(float,float);
void main()
{
	float a,b;
	printf("ENTER TWO NUMBERS:-");
	scanf("%f%f",&a,&b);
	sum(a,b);

}
void sum(float x,float y)
{
	float sum=0;
  sum=x+y;
  printf("sum=%f",sum);
}
