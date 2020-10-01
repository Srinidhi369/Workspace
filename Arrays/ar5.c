#include<stdio.h>

void main()
{
	int a[5]={10,20,30,40,50};
	int b[5]={60,70,80,90,100};
	int i;
	int c[10];
	i=0;
	while(i < 5)
	{
		c[i] = a[4-i];
		i++;
	}
	while (i < 10)
	{
		c[i]   =  b[9-i];
		i++;
	}
	printf("Elements in c are:\n");
	i = 0;
	while (i < 10)
	{
		printf("%d\n", c[i]);
		i++;
	}
}
