


#include<stdio.h>
void main()
{
	int n,i,row=1;
	char ch ='*';
	printf("enter value for row:\n");
	scanf("%d",&n);
	printf("*\n");
	while(row<=n)
		{
			i=1;
			while(i>=row)
			{
				i--;
				printf("%c",ch);
			}
		printf("\n");
		row++;
		}
}

