#include<stdio.h>
#include<conio.h>
//prime number:2,3,5,7,11,13,17,19....
	void main()
{
	int n,i,count=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	 {
	 count++;
	 }
	}
	if(count==2)
	{
	printf("It's prime number");
	}
	else
	{
	printf("It's not prime number");
	}
	getch();
}