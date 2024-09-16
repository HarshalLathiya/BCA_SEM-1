#include<stdio.h>
//Write a C program to find quotient & remainder of two int, by user
	void main()
{
	int dividend,divisor,quotient,remainder;
	clrscr();
	printf("Enter dividend:");
	scanf("%d",&dividend);
	printf("Enter divisor:");
	scanf("%d",&divisor);
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("quotient is:%d\n",quotient);
	printf("remainder is:%d\n",remainder);
	getch();
}