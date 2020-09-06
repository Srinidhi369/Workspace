
#include<stdio.h>

void main()
{
	int a,b,c;

	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	printf("Enter value of c:\n");
	scanf("%d",&c);

	if(a==b && b==c)
	{
		printf("This is Equilateral triangle\n"); //all sides are equal

	}
	else if(a==b || a==c|| b==a)
	{
		printf("This is isoceles triangle\n"); // any two sides are equal
	}
	else
	{
		printf("This is scalene triangle\n");   //no two sides are equal
	}

}
