
#include<stdio.h>


void main()
{
	int age;
vote:
	printf("Enter value of age =\n");
	scanf("%d",&age);

//vote:
	if(age > 18)
	{	 
		printf("Eligible to VOTE \n");
	}
	else
	{
		printf("NOT Eligible TO VOTE\n");
		goto vote;
	}

}

