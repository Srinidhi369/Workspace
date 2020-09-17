#include<stdio.h>
`
void main()
{
	int a[6]={10,30,25,45,70};
	int sum =0;
	int i=0;
	while(i<6)
		{
			sum=sum+a[i];
			i++;
		}
	printf("\nSum of elements in array=%d\n",sum);
}
