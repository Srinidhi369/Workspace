



#include<stdio.h>

void main()
{
int Id,password;
int n;
	printf("Enter value of Id:\n");
	scanf("%d",&Id);
	printf("Enter value of password:\n");
	scanf("%d",&password);
	printf("Enter value of n:\n");
	scanf("%d",&n);
	switch(n)
	{
	case 0:
		printf("Your are allowed inside the room\n");
		break;
	case 1:
		printf("You entered wrong password you are not allowed\n");
		break;
	default:
		printf("Please enter the correct Id and password\n");
		break;	
	}

}	
