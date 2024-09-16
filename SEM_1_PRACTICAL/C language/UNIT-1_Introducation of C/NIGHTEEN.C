#include<stdio.h>
//Write a C program to find VOVEL number
	void main()
{
	char name;
	int value;
	clrscr();
	printf("Enter any character :");
	scanf("%c",&name);
	printf(name=='A'||name=='E'||name=='I'||name=='O'||name=='U'
	      ||name=='a'||name=='e'||name=='i'||name=='o'||name=='u'
	      ? "This is vovel":"This is non vovel");
	getch();
}