#include<stdio.h>
main()
{
	float  p,t,r,si;
	printf("enter the principle");
	scanf("%f",&p);
	printf("enter the time");
	scanf("%f",&t);
	printf("enter the rate");
	scanf("%f",&r);
	si=p*t*r/100;
	printf("simple intrest=%f",si);
}
