





#include<stdio.h>
void main()
{
	int n,r,rev=0;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	while(n>0)
	{
		r = n%10;
		rev = rev*10+r;
		n = n/10;
		printf("\n Reverse of num = %d\n",rev);
	}
}
