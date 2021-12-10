#include<stdio.h>
main()
{
	float   base,height,area;
	printf ("enter the base of triangle");
	scanf("%f",&base);
	printf("enter the height of triangle");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("area of triangle=%f",area);
}
