
#include <stdio.h>

void main()
{
	int a[5];
	int temp,i;

	printf("Enter array elements : ");
	
	i = 0;
	while (i < 5)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("Enter element to search : ");
	scanf("%d", &temp);

	i = 0;
	while (i < 5)
	{
		if (a[i] == temp)
		{
			printf("Element %d found at index : %d\n", a[i], i);
		}

		i++;
	}
}
