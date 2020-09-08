


#include<stdio.h>

void main()
{
	int num;
	printf("Enter value of num:\n");
	scanf("%d",&num);

	printf("\nReverse of Natural no from 1 to %d\n",num);
	while(num)
	{
	printf("%d",num);
	num--;
	}
}	
