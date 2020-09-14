


#include<stdio.h>
void main()
{
	int n,i,row;
	char ch ='*';

	printf("enter value for row:\n");
	scanf("%d",&n);

	row=n;
	printf("\n");

	while(row >=0)
		{
			i=1;
			while(i<=row)
			{
				i++;
				printf("%c",ch);
			}
		printf("\n");
		row--;
		}
}

