//Priyanshu 18EJICS124
#include<stdio.h>
void main()
{
	int a,b,c,i;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
	scanf("%d",&b);
	printf("Enter 3rd number : ");
	scanf("%d",&c);
	for (i=0;i<3;i++)
	{
		if (a>b && a>c)
		{
			printf("%d ",a);
			a=0;
		}
	
		else if (b>c)
		{
			printf("%d ",b);
			b=0;
		}
	
		else
		{
			printf("%d ",c);
			c=0;
		}		
	}
	
}
