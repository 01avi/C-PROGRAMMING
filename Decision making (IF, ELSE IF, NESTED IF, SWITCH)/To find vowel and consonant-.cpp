#include<stdio.h>
main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='A')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
	printf("charecter is a vowel");
    }
	else if(ch>='0'&&ch<='9')
	{
	printf("character is a integer");  
    }
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
    printf("character is a consonant");
	}
	else
	{
		printf("character is a special character");
	}
}
