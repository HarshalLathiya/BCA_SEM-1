#include<stdio.h>
#include<conio.h>
	void abc(int);
	void main()
{
	clrscr();
	abc(1);
	getch();
}
	void abc(int a)
{
	printf("\nHello\tBCA\t%d",a);
	if(a<10)
	{
	a++;
	abc(a);
	}
}
