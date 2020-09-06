		

#include<stdio.h>

void main()
{
	int ID;
	int passwd;

	printf("Enter value of ID: \n");
	scanf("%d",&ID);
	printf("Enter the password:\n");
	scanf("%d",&passwd);

	if (ID < 50 ||passwd >=4)
	{
		printf("allow the person inside\n");
	}
	else 
	{
 		printf("you are not allowed \n");
	}

}
