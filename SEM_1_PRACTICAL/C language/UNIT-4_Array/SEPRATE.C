#include<stdio.h>
#include<conio.h>
	void main()
{
	int a,b;
	clrscr();
	scanf("%d",&a);
	while(a>0)
	{
	b=a%10;
	a=a/10;
	printf("%d\t",b);
	}
	getch();
}