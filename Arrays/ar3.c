#include<stdio.h>

void main()
{
	int a[5]={10,30,25,45,70};
	int b[5]={10,20,40,30,45};
	int c[10];
	int i=0;

	while(i<5)
	{
		printf("%d\n",a[i]);
		i++;
	}

	i = 0;
	while(i<5)
	{
		printf("%d\n",b[i]);
		i++;
	}

	i = 0;
	while (i < 5)
	{
		c[i]   =   a[i];
		c[i+5] =   b[i];
		i++;
	}

	printf("Array elements in c are :\n");

	i = 0;
	while (i < 10)
	{
		printf("%d\n", c[i]);
		i++;
	}
}
