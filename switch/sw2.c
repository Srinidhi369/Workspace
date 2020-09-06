
#include<stdio.h>

void main()
{
	int a,b,c;
	int n;

	printf("Enter value of a\n");
	printf("Enter value of b\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("\n 1:Addition of two num\n");
	printf("\n 2:Subtraction of two num\n");
	printf("\n 3:Multiplication of two num\n");
	printf("\n 4:Division of two num\n");
	scanf("%d", &n);

	switch(n)
	{
		case 1:
			c=a+b;
			printf("\n Add of two num=%d",c);
			break;
		case 2:
			c=a-b;
			printf("\n Sub of two num=%d",c);
			break;
		case 3:
			c=a*b;
			printf("\n Mul of two num=%d",c);
			break;
		case 4:
			c=a/b;
			printf("\n Div of two num=%d",c);
			break;
		default:
			printf("Thanks for your service\n");
			break;
	}
}
