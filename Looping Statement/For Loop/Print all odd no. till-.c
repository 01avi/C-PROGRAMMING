#include<stdio.h>
main()
{
	int i,n;
	printf("PRINT ALL ODD NO TILL:--");
	scanf("%d", &n);
	printf("ALL ODD NUMBER FROM 1 TO %d ARE:--\n",n);
	for(i=1; i<=n; i++)
	{
		if(i%2!=0)
		{
			printf("%d\n", i);
		}
	}
	
}
