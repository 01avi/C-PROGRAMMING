#include<stdio.h>
main()
{
	int i, num;
	printf("ENTER THE INTEGER:-");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	
		printf("%d*%d=%d\n", num, i, (num*i));
    }
}

