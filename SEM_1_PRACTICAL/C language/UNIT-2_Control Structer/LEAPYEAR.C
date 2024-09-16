#include<stdio.h>
#include<conio.h>
//Write a C program to find entered year is leap year or non leap year
	void main()
{
	int a;
	clrscr();
	printf("Enter any year:");
	scanf("%d",&a);
	if(a%4==0)
	{
	printf("Leap year");
	}
	else
	{
	printf("non leap year");
	}
	getch();
}