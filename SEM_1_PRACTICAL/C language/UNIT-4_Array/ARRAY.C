#include<stdio.h>
#include<conio.h>
//Write a C program to create simple Array.
	void main()
{
	int a[5]={10,20,30,40,50},i;
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nA\t[%d]\t%d",i,a[i]);
	}
	getch();
}