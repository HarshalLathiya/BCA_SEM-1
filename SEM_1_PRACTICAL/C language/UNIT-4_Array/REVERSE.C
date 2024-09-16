#include<stdio.h>
#include<conio.h>
//Write a C Program To find reverse number
	void main()
{
	int num,reverse=0,rem;
	clrscr();
	printf("Enter an Number:");
	scanf("%d",&num);
	while(num != 0)
	{
	 rem=num%10;
	 reverse=reverse*10+rem;
	 num/=10;
	}
	printf("Reverse number is :%d",reverse);
	getch();
}
