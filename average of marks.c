#include<stdio.h>
main()
{
	float a,b,c,d,e,f,g,h;
	printf("enter the marks of a,b,c,d,e");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e);
	g=f/5;
	printf("average of marks=%f\n",g);
	h=((f/500)*100);
	printf("percentage of marks=%f",h);
}
