
#include <stdio.h>

void main()
{
	int a[5];
	int i=0,j=0;
	int temp;

	printf("Enter Array elements : \n");

	i = 0;
	while (i < 5)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;
	while(i < 5)
	{
		j=i+1;
		while(j < 5)
		{
		 	if(a[i] > a[j])
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
