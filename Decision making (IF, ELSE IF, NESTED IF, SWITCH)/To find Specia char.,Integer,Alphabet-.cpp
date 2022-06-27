#include<stdio.h>
main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='z'))
	{
	printf("charecter is an alphabet");
    }
	else if((ch>='0')||(ch=='9'))
	{
	printf("character is a integer");
    }
	else
	{
	printf("character is a special character");  
    }
}
