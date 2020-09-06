
#include<stdio.h>

void main()
{
	int n;	
	int year;

	printf("Enter value of n\n");
	scanf("%d",&n);

	printf("Enter the value of year:\n");
	scanf("%d",&year);

	switch(n)
	{	
		case 0: 	
			year % 4 == 0;
			printf("The year is leap year:\n");
			break;		
		case 1:
			year % 100 == 0;
			printf("The year is not a leap year:\n");
			break;
	}	

}		



