



#include<stdio.h>

void main()
{
	int num,n=1;
	printf("Enter value of num:\n");
	scanf("%d",&num);
	while(n<=num)		
		{
		if(num % n == 0)
			{	
			printf("%d\n",n);
			}
		n++;	
		//printf("Factor of n is = %d\n");
		}
}




