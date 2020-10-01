#include<stdio.h>

void main()
{
	int a[10]={63,48,31,89,50,17,9,72,29,1};
	int sum =0;
	int i=0;
	while(i<10)
	{
		if(a[i]%2==0)
		{	
			sum=sum+a[i];
		}
		i++;
	}
	printf("Sum of Even elements in array=%d\n",sum);
}
