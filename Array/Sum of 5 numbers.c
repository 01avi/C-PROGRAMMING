#include<stdio.h>
main()
{
	int number[5];
	int i;
	int sum=0;
	for(i=0;i<5;i++)
	{
      printf("ENTER FIVE NUMBERS:-");
      scanf("%d",&number [i]);
    }
    {
	for(i=0;i<5;i++)
	{
     sum=sum+number[i];
    }
	
	printf("%d",sum);
    }
}
