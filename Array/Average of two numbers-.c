#include<stdio.h>
main()
{
	float marks[5];
	int i;
	float sum=0;
	float average;
	for(i=0;i<5;i++)
	{
		printf("ENTER FIVE SUBJECTS MARKS:-");
		scanf("%f",&marks [i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	    average=sum/5;
	}
	printf("AVERAGE=%f",average);
}
