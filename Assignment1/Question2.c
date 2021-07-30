//Priyanshu 18EJICS124
#include<stdio.h>
void main()
{
	int a,b,c,x;

    printf("Enter a three digit number :");
    scaf("%d",&a);

    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if (x==c)
    
       printf("It is PALINDROME");
    else
       printf("It is NOT PALINDROME");
    
}
