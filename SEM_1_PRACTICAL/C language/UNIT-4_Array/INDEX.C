#include<stdio.h>
#include<conio.h>
//Write a C program to create simple Array.
	void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("\nIndex %d %d",i,a[i]);
	}
	getch();
}