#include<stdio.h>

void main()
{
	int a[5]={10,30,25,45,70};
	int i=0,j=0,temp;

	printf("Array elements are :\n");

	while(i<5)
	{
		if(a[i]>a[j])
		{
			a[i]=a[j];
			i++;
		}
	}	
	j = i+1;
	while (j < 0)
	{
		temp    =   a[i];
		a[i]    >   a[j];
		a[j]  =   temp;

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
