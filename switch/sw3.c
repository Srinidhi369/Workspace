
#include<stdio.h>

void main()
{
	int Id,password;

	printf("Enter value of Id:\n");
	scanf("%d",&Id);

	switch(Id)
	{
		case 165:
			printf("Enter value of password:\n");
			scanf("%d",&password);
			switch (password)
			{
				case 103842:
					printf("Door unlocked\n");
					break;

				default:
					printf("Sorry Password Incorrect\n");
			}

			break;

		default:
			printf("Please enter the correct Id\n");
	}

}	
