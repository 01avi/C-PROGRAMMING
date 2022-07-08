#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character:- ");
	scanf("%c", &ch);;
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		printf("character is alphabet");
	}
	else
	{
		printf("character is not an alphabet");
	}
	
}
