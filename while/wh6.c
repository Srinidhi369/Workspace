


#include<stdio.h>

void main()
{
	int n,i,row=1;
	char ch = '*';
	printf("Enter no of rows :\n");
	scanf("%d",&n);

	printf("*\n");
	while(row<=n)
	{
		i=1;
		while(i<=row)
		{
			printf("%c",ch);
			i++;
		}
			printf("\n");
			row++;
	}
}	
