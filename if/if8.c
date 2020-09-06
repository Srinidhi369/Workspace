
#include<stdio.h>

void main()
{
	int n;

	printf("Enter age of person n:\n");
	scanf("%d",&n);

	if(n>18)
	{
		printf("You are eligible to vote \n");
	}
	else
	{
		printf("You cannot access the Right to Vote\n");
	}
}
