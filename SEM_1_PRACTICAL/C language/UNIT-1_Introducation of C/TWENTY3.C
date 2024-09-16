#include<stdio.h>
//Write a C Program to find average of 5 number entered by user.
	void main()
{
	int number1,number2,number3,number4,number5,sum,average;
	clrscr();
	printf("Value of number1:");
	scanf("%d",&number1);
	printf("Value of number2:");
	scanf("%d",&number2);
	printf("Value of number3:");
	scanf("%d",&number3);
	printf("Value of number4:");
	scanf("%d",&number4);
	printf("Value of number5:");
	scanf("%d",&number5);
	sum=number1+number2+number3+number4+number5;
	average=sum/5;
	printf("Here is the average value:%d",average);
	getch();
}

