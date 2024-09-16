#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],d,c=0;
	clrscr();
	for(d=0;d<5;d++)
	{
		scanf("%d",&a[d]);
	}
	for(d=0;d<5;d++)
	{
		printf("\n%d",a[d]);
		c=c+a[d];
	}
	printf("\n\n\n\n%d",c);
	getch();
}
