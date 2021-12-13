#include<stdio.h>
main()
{
	int w;
	char ch;
	printf("enter b-burger, f-friench fries, p-pizza,s- sand wich");
	scanf("%c",&ch);
	printf("enter the no of orders");
	scanf("%d",&w);
	switch(ch)
	{
		case 'b':
			printf("bill is b=%d",200*w);
			break;
		case 'f':
			printf("bill is f=%d",50*w);			
			break;
		case 'p':
			printf("bill is p=%d",500*w);
			break;
		case 's':
			printf("bill is s=%d",150*w);
			break; 
			default:
				printf("it is not deliverable");
				
	}
}
	
