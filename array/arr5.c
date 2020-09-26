#include<stdio.h>

void main()
{
	int a[5]={10,30,25,45,70};
	int i=0,temp;

	printf("Array elements are :\n");

	while(i<5)
	{
		printf("%d\n",a[i]);
		i++;
	}

	i = 0;
	while (i < 3)
	{
		temp    =   a[i];
		a[i]    =   a[4-i];
		a[4-i]  =   temp;

		i++;
	}	

	printf("Array after reverse:\n");

	i = 0;
	while (i < 5)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
