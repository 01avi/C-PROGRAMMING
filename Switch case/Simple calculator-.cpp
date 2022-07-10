#include<stdio.h>
 main()
{
	char op;
	float num1,num2,result=0.0f;
	printf("\n**WELCOME TO SIMPLE CALCULATOR**\n");
	
	printf("\nENTER [NUM 1] [+ - * /] [NUM2]\n");
		scanf("%f%c%f",&num1,&op,&num2);
	
	switch(op)
	{
		case '+':
			result=num1+num2;
			break;
			case '-':
				result=num1-num2;
				break;
				case '*':
					result=num1*num2;
					break;
					case '/':
						result=num1/num2;
						break;
						default:
							printf("INVALID INPUT!!");
							break;
	}
	printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
	printf("\nTHANK YOU FOR USING SIMPLE CALCULATOR\n");
	
}

