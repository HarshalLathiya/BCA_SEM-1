#include<stdio.h>
//Write a C program to display(int no,float no, character & string
	void main()
{
	char name[1];
	int rollno;
	float marks;
	char string[8];
	clrscr();
	printf("My name is:");
	scanf("%c",&name);
	printf("My rollno is:");
	scanf("%d",&rollno);
	printf("My marks is:");
	scanf("%f",&marks);
	printf("My string is:");
	scanf("%s",&string);
	getch();
}