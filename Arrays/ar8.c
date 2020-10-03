#include<stdio.h>

void main()
{
	int a[5]={10,30,25,45,70};
	int b[5]={25,30,50,60,90};
	int j=0,temp;
	int i = 0;

	while(i < 5)
	{
		j=0;
		while(j < 5)
		{	
			if(a[i]==b[j])
			{
				printf("Element %d is common with index a[%d] and b[%d]\n",b[i], i,j);
			}

			j++;
		}

		i++;
	}
}
