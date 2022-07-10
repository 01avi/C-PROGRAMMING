#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	float root1,root2,imaginary;
	float discriment;
	printf("ENTER VALUES OF A,B,C OF QUADRATIC EQUCATION:-");
	scanf("%f%f%f",&a,&b,&c);
	discriment=(b*b)-4*a*c;
	switch(discriment>0)
	{
		case 1:
			root1=(-b+sqrt(discriment))/(2*a);
			root2=(-b-sqrt(discriment))/(2*a);
			printf("TWO DISTINCT AND REAL ROOTS ARE EXISTS:%.2f and %.2f",root1,root2);
			break;
			case 0:
				switch(discriment<0)
				{ 
					case 1:
						root1=root2=-b/(2*a);
						imaginary=sqrt(-discriment)/(2*a);
						printf("TWO DISTINCT COMPLEX ROOT EXISTS:%.2f+i%.2f and %.2f-i%.2f,root1,imaginary,root2,imaginary");
						break;
						case 0:
							root1=root2=-b/(2*a);
							printf("TWO EQUAL AND REAL ROOTS EXISTS:%.2f and %.2f,root1,roo2");
							break;
				}
	}
}
