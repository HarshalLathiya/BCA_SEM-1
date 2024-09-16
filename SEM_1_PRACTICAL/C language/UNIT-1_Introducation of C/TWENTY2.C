#include<stdio.h>
//Write a C program to enter a number and calculate it's square and cube of it.
	void main()
{
	int number,square,cube;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&number);
	square=number*number;
	cube=number*number*number;
	printf("%d is square value\n",square);
	printf("%d is cube value",cube);
	getch();
}