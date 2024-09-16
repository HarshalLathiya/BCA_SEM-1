#include<stdio.h>
//Write a C program to find your age,born year & Current year enterd by user
	void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("Here is the born year:");
	scanf("%d",&a);
	printf("Here is the current year:");
	scanf("%d",&b);
	c=b-a;
	printf("Here is the my age:%d",c);
	getch();
}