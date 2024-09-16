#include<stdio.h>
#include<conio.h>
//Write a C program to get integer number and print first three powers.
	void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value:");
	scanf("%d",&a);
	printf("n^1:%d",a);
	b=a*a;
	printf("\nn^2:%d",b);
	c=a*a*a;
	printf("\nn^3:%d",c);
	getch();
}


