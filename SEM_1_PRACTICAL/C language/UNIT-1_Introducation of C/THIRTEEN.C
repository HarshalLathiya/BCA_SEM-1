#include<stdio.h>
/*Write a C program to find Even or odd number using conditional oprator
Even number:2,4,6,8,10,12,14,,, Odd number:3,5,7,9,11,13,15,,,*/
	void main()
{
	int a=15;
	clrscr();
	printf("a=%d\n",a);
	printf(a%2==0?"Even number":"Odd number");
	getch();
}