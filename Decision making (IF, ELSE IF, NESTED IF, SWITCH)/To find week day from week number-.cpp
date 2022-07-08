#include<stdio.h>
main()
{
	int p;
	printf("Enter Week Number:- ");
	scanf("%d", &p);
	if(p==1)
	{
		printf("This is SUNDAY of that day");
	}
	else if(p==2)
	{
		printf("This is MONDAY on the day 2");
	}
	else if(p==3)
	{
		printf("This is TUESDAY on the day 3");
	}
	else if(p==4)
	{
		printf("This is WEDNESDAY on the day 4");
	}
	else if(p==5)
        {
    	printf("This is THURSDAY on the day 5");
	}
	else if(p==6)
	{
		printf("This is FRIDAY on the day 6");
	}
	else if(p==7)
	{
		printf("This is SATURDAY on the day 7");
	}
	else
	{
		printf("A WEEK HAS ONLY 7 DAYS,so please enter 1 to 7");
	}
}
