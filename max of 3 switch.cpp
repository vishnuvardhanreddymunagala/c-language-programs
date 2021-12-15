#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b,c numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	switch(a>b && a>c)
	{
	case 1:
	printf("a is bigest%d");
	break;
	case 0:
		switch(b>c)
		{
			case 1:
			printf("b is bigest %d");
			break;
			case 0:
			printf("c is bigest %d");
		}
    }
}
