#include<stdio.h>
#include<conio.h>
//Write a C program To find fectorial number
	void main()
{
	int a,fact=1,num;
	clrscr();
	printf("Enter an number:");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
	fact=fact*a;
	}
	printf("Fectorial of %d is %d:",num,fact);
	getch();
}