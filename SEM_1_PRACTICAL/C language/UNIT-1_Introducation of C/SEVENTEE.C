#include<stdio.h>
//Write a  C program to find smallest value
	void main()
{
	int a,b,smallest;
	clrscr();
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	smallest=(a<b)?a:b;
	printf("The smallest number is:%d\n",smallest);
	getch();
}