#include<stdio.h>
#include<conio.h>
//Write a C program to find area of trapezium
	void main()
{
	float base1,base2,height,area;
	clrscr();
	printf("Enter value of base1:");
	scanf("%f",&base1);
	printf("Enter value of base2:");
	scanf("%f",&base2);
	printf("Enter value of height:");
	scanf("%f",&height);
	area=((base1+base2)/2)*height;
	printf("Here is the value of trapezium:%f",area);
	getch();
}

