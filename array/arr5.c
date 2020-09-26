#include<stdio.h>

void main()
{
	int a[6]={10,30,25,45,70};
	int i=0;
	while(i<6)
		{
			printf("%d\n",a[i]);
			i++;
		}
	while(i>=0)
		{
			printf("%d\n",a[i]);
			i--;
		}
	printf("%d\n",a[i]);
}
