#include<stdio.h>
main()
{
	float ch;
	printf("ENTER A NUMBER:--");
	scanf("%f",&ch);
	switch(ch>0)
	{
		case 1:
		printf("%f is POSITIVE",ch);
		break;
		case 0:
			switch(ch<0)
			{
			 case 1:
				printf("%f is NEGATIVE",ch);
				break;
				default:
					printf("WRONG INPUT!!");
					break;
		   }
    }
}

