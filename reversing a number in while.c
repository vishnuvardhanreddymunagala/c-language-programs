#include<stdio.h>
main()
{
	int i=1,n,r=0,d;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;		
	}
		printf("reverse number is %d",r);
}
