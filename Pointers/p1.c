#include<stdio.h>

void main()
{
	int a,b,c,*p ,*q ,*r,Sum;
	printf("The three integers are:\n");
	scanf("%d %d %d",&a,&b,&c);
	p = &a;
	q = &b;
	r = &c;
	Sum = *p + *q + *r;
	printf("The Sum is = %d\n",Sum);
}
