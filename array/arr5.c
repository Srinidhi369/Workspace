#include<stdio.h>

void main()
{
	int a[5]={10,20,30,40,50};
	int b[5]={60,70,80,90,100};
	int i=0,temp;
	int c[i];

	printf("Array elements are :\n");

	i=0;
	while(i<5)
	{
		printf("%d\n",a[i]);
		printf("%d\n",b[i]);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		c[i]   =  a[i]+b[i];
		i++;
	}
	printf("%d",c[i]);	
	i=0;
	while(i < 7)
	{
		temp  =  c[i];
		c[i]  = c[9-i];
		c[9-i] = temp;
		i++;
	}	
	printf("Array after reverse:\n");

	i = 0;
	while (i < 10)
	{
		printf("%d\n", c[i]);
		i++;
	}
}
