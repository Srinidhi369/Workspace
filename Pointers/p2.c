#include<stdio.h>

void main()
{
	int a,b;
	int *great;
	int *p ,*q;
	printf("value of a and b is :\n");
	scanf("%d %d",&a,&b);
	p = &a;
	q = &b;
	if(*p>*q)
	{
		great = p;
		printf("Value of p is great : %d\n",*p);
	}
	else
	{
		great = q;
		printf("Value of q is great : %d\n",*q);
	}
}
