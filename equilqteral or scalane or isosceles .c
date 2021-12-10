#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("enter the sides of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	if (side1==side2 && side2==side3)
	{
		printf("it is a equilateral");
	}
	else if (side1==side2||side2==side3||side3==side1)
	{
		printf("it is a isoscles ");
	}
	else
	{
		printf("it is a scalane");
	}
}
