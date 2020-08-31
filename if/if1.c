


#include<stdio.h>


void main()
{
    int a,b,c;

    printf("Enter value of a:\n");
    scanf("%d", &a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    printf("Enter value of c:\n");
    scanf("%d",&c);

    if(a>b && a>c)
    {   
	   printf("value of a is greater than b\n");
    }	
    if(b>c && b>a)
    { 
	   printf("Value of b is greater than c\n");
    }
    if(c>a && c>b)
    { 
	    printf("Value of c greater than a\n ");
    }    


}

