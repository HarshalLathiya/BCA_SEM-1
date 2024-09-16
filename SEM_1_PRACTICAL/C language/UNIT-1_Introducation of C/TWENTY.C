#include<stdio.h>
//Write a C program to find swap value
	void main()
{
	int a=10;
	int b=20;
	int c;
	clrscr();
	c=a;
	a=b;
	b=c;
	printf("Value of a:%d\n",a);
	printf("Value of b:%d\n",b);
	printf("Value of c:%d",c);
	getch();
}