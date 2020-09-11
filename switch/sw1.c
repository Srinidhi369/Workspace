
#include<stdio.h>

void main()
{
	int n;	
	int date,month,year;

	printf("Enter date\n");
	scanf("%d",&date);

	printf("Enter month\n");
	scanf("%d",&month);

	printf("Enter the value of year:\n");
	scanf("%d",&year);


	printf("\nDate is:\n");

	switch(month)
	{	
		case 1: 	
			printf("%d-Jan-",date);
			break;		
		case 2: 	
			printf("%d-Feb-",date);
			break;	
		case 3: 	
			printf("%d-Mar-",date);
			break;	
		case 4: 	
			printf("%d-Apr-",date);
			break;
		case 5: 	
			printf("%d-May-",date);
			break;
		case 6: 	
			printf("%d-Jun-",date);
			break;
		case 7: 	
			printf("%d-Jul-",date);
			break;	
		case 8: 	
			printf("%d-Aug-",date);
			break;	
		case 9: 	
			printf("%d-Sept-",date);
			break;	
		case 10: 	
			printf("%d-Oct-",date);
			break;	
		case 11: 	
			printf("%d-Nov-",date);
			break;
		case 12: 
			printf("%d-Dec-",date);
			break;		
		default:
			printf("\nEnter valid month\n");
			return;
	}	

	if ((year % 4) == 0)
	{
		printf("%d (It's a leap year)\n", year);
	}
	else
	{
		printf("%d (It's not a leap year)\n", year);
	}

}		



