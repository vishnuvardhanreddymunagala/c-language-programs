#include<stdio.h>
main()
{
	int a,k;
	printf("enter the value");
	scanf("%d",&a);
	k=a%2;
	switch(k)
	{
		case 0:
			printf("it is an even");
			break;
		case 1:
			printf("it is an odd");
			break;
		default:
			printf("it is other than even orodd");
	}
}
