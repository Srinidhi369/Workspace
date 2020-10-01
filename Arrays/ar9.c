#include<stdio.h>

void main()
{
	int a[5]={5,4,3,2,1};
	int i=0,j=0;
	int temp;

	while(i < 4)
	{
		j=i+1;
		while(j < 5)
		{
		 	if(a[i] > a[j]);
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}

			j++;
		}

		i++;
	}
	
	printf("Sorted  elements in a are :\n");
	i = 0;
	while (i < 5)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
