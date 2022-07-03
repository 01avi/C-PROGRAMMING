#include<stdio.h>
main()
{
	int i, n, sum=0;
	printf("INPUT UPPER LIMIT:-");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	printf("SUM OF FIRST %d NATURAL NUMBERS = %d", n, sum);
	
}
