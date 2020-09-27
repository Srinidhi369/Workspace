#include<stdio.h>

void main()
{
	int a[5]={10,30,25,45,70};
	int c[10];
	int i=0,j=0;

	while(i<5)
	{
		printf("%d\n",a[i]);
		i++;
	}

	i = 0;
	j=i+1;
	while(j<5)
	{
		a[i]>a[j];
		j++;
	}
	printf("sorted  elements in c are :\n");

	i = 0;
	while (i < 5)
	{
		printf("%d\n", c[i]);
		i++;
	}
}
