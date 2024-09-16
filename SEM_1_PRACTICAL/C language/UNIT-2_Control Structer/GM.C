#include<stdio.h>
//Good morning
	void main()
{
	int a;
	clrscr();
	printf("Enter the value of A:");
	scanf("%d",&a);
	if(a==1)
	{
	printf("Good Morning");
	}
	else if(a==2)
	{
	printf("Good Afternoon");
	}
	else if(a==3)
	{
	printf("Good Evening");
	}
	else if(a==4)
	{
	printf("Good Night");
	}
	else
	printf("other Message");
	getch();
}
