#include<stdio.h>
main()
{
	char a;
	printf("enter the symbol");
	scanf("%c",&a);
	switch(a)
	{
		case 'a'...'z':
			printf("these are lower case characters");
			break;
		case 'A'...'Z':
			printf("these are uppercase characters");
			break;
		case '0'...'9':
		printf("these are numbers");
		break;
		default:
			printf("these are special symbols");
		}
	}

