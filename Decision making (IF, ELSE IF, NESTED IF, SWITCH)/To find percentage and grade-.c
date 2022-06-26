#include<stdio.h>
main()
{
	int phy,che,math,hindi,english;
	float per;
	printf("enter 5 sub marks:=");
	scanf("%d%d%d%d%d", &phy, &che, &math, &hindi, &english);
	
	per=(phy+che+math+hindi+english)/5;
	printf("percentage=%.2f\n", per);
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else
	{
	    printf("Grade F");
    }
}
