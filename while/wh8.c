
#include<stdio.h>

void main()
{
	int n,a=0,c=0,b=1;
	printf("Enter value for n:\n");
	scanf("%d",&n);

	printf("%d\n%d\n",a,b);

	while(c>n)
	{
		c=a+b;
		a=b;
		b=c;
		n=n-1;
		printf("%d\n",c);
	}
}
