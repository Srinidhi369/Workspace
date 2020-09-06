
#include<stdio.h>

void main()
{

	int a,b,c;

	printf("Enter the value of a: \n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	printf("Enter the value of c:\n");
	scanf("%d",&c);

	if((a+b)>c)
	{ 	
		if((b+c)>a)
		{
			if((c+a)>b)
			{
				printf("Triangle  is valid \n");

			}
			else
			{
				printf("Traingle is invalid \n");
			}
		}
		else
		{
			printf("Triangle is invalid \n");
		}
	}
	else
	{
		printf("Traingle is invalid \n");
	}


}
