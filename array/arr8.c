#include<stdio.h>

void main()
{
	int a[6]={10,30,25,45,70};
	int b[6]={10,20,40,30,45};
	int c[12];
	int i=0;
	while(i<6)
		{
			printf("%d\n",a[i]);
			i++;
		}
	while(i<6)
		{
			printf("%d\n",b[i]);
			i++;
		}
	if(a[6]==b[6])
		{
			c[i]=b[i];
			i++;
		}
	printf("%d\n",c[i]);

}
