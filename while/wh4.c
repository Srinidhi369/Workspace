

#include<stdio.h>
void main()
{
	int base,Exponent;
	long int n = 1;
	printf("Enter value of base:\n");
	scanf("%d",&base);
	printf("Enter value of Exponent\n");
	scanf("%d",&Exponent);
	while(Exponent!=0)
	{
	n*=base;
	--Exponent;
	}
	printf("\n Power = %ld \n",n);
}
