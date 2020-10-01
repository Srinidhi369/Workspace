#include<stdio.h>

void main()
{
	int a[10]={63,4,91,62,72,43,67,82,51,98};
	int Even=0;
	int i=0;
	while(i<10)
	{
		if(a[i]%2==0)
		{	
			Even++;
		}
		i++;
	}
	printf("Even elements in array=%d\n",Even);
}
