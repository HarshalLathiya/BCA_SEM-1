#include<stdio.h>
//swap by user
	void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("Here is value of a:%d\n",a);
	printf("Here is value of b:%d",b);
	getch();
}
