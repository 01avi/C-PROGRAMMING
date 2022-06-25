#include<stdio.h>
main()
{
	int num;
	printf("Enter a num");
	scanf("%d", &num);
	
	if(num % 2 == 0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}

