#include<stdio.h>
//Write a C program to find enterd year is Leap year or nonleap year
	void main()
{
	int a;
	clrscr();
	printf("Enter year:");
	scanf("%d",&a);
	printf("Your enterd year is:");
	printf(a%4==0?"leap year":"nonleap year");
	getch();
}