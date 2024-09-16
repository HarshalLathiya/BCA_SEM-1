#include<stdio.h>
//Write a C program to find largest value
	void main()
{
	int a;
	int b;
	int largest;
	clrscr();
	printf("First number:");
	scanf("%d",&a);
	printf("second number:");
	scanf("%d",&b);
	largest=(a>b)?a:b;
	printf("Here is the largest number%d:",largest);
	getch();
}