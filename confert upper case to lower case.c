#include<stdio.h>
main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	if (c>=65 && c<=90)
	{
		c=c+32;
		printf("the character is %c",c);
	}
	else 
	{
		c=c-32;
		printf("the character is %c",c);
	}
}
