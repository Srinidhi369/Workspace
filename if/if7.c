



#include<stdio.h>

void main()
{
int cusid;
float units ,charges;
	printf("Enter the customerid :\n");
	scanf("%d",&cusid);
	printf("Enter no of units :\n");
	scanf("%f",&units);
	if(units<=50)
		charges=0.50*units;		
	else if(units>=100)
		charges=0.75*units;
	else if(units<=250)
	       charges=1.20*units;
	else(units>250);
		charges=1.50*units;	
		printf("The amount that generated for the bill payent is : %f\n",charges);
		
}		
