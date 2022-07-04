#include<stdio.h>
main()
{
	long long num;
	int count=0;
	printf(" ENTER ANY NUMBER:-");
	scanf("%11d",&num);
	do
	{
		count++;
		num/=10;
	}while(num!=0);
	printf("TOTAL DIGITS:%d",count);
}
