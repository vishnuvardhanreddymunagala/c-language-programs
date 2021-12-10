#include<stdio.h>
main()
{
	int a,b;
	char s;
	printf("enter s value");
	scanf("%c",&s);
	printf("enter the values of a,b");
	scanf("%d %d",&a,&b);
	switch(s)	
	{
		case'+':
			printf("sum of two numbers%d",a+b);
		break;
		case'-':
			printf("difference of two numbers%d",a-b);
		break;
		case'*':
		 printf("multiplication of two numbers%d",a*b);
		break;
		case'/':
		printf("division of two numbers%d",a/b);
		default:
		printf("s is not defined");
	}
}
