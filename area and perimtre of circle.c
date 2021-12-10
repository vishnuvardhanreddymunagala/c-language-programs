#include<stdio.h>
main()
{
	float  r,area ,perimetre;
	printf("enter the radius");
	scanf("%f",&r);
	area=(3.14)*r*r;
	perimetre=2*3.14*r;
	printf("area and perimetre of circle=%f %f",area,perimetre);
}
