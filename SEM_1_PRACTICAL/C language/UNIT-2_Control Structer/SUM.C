#include<stdio.h>
#include<conio.h>
	void main()
{
	clrscr();
	int a,b,c=0;
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
	c=c+a;
	}
	printf("\n1 to %d sum=%d",b,c);
	getch();
}