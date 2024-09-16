#include<stdio.h>
//Write a C program to multiply two floating no by user
	void main()
{
	float a;
	float b;
	float c;
	clrscr();
	printf("This is first no:");
	scanf("%f",&a);
	printf("This is second no:");
	scanf("%f",&b);
	c=a*b;
	printf("Multiplication value%f",c);
	getch();
}
