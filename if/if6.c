
#include<stdio.h>

void main()
{
	int month;

	printf("Enter the month number 1 to 12 \n");
	scanf("%d",&month);

	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==11)
	{
		printf("31 days in this month\n");
	}	
	else if(month==4 || month==6 || month==9 || month ==11)
	{
		printf("30 days in this month\n");
	}		
	else if(month==2)
	{
		printf("28 or 29 days in a month\n");
	}
	else 
	{
		printf("Enter valid number from 1 to 12:\n");	
	}
}


