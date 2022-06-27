#include<stdio.h>
main()
{
	int Angle1, Angle2, Angle3, SUM;
	printf("Enter Angles of triangle=\n");
	scanf("%d%d%d", &Angle1, &Angle2, &Angle3);
	SUM=Angle1+ Angle2+ Angle3;
	if(SUM==180 &&Angle1>0 &&Angle2>0 &&Angle3>0)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("triangle is not valid");
	}
}
