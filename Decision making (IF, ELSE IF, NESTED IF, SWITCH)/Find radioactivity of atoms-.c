#include<stdio.h>
main()
{
	int a,b;
	float devide;
	printf("WELCOLE TO FIND RADIOACTIVITY\n");
	printf(" ENTER VALUE OF NUTRON AND PROTON:-");
	scanf("%d%d",&a,&b);
	devide=a%b;
	if(devide>1.49)
	{
		printf("ATOM IS RADIOACTIVE");
	}
	else
	{
	printf("ATOM IS NOT RADIOACTIVE"); 
    }
}
