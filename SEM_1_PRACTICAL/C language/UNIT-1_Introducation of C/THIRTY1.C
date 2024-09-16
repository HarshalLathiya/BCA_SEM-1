#include<stdio.h>
#include<conio.h>
//Write a C program to find gross salary an employee.
	void main()
{
	int basic,ta,da,hra,ma,pf,gross,net;
	clrscr();
	printf("Enter your Salary:");
	scanf("%d",&basic);
	ta=basic*2.5/100;
	printf("Traveling allowance:%d\n",ta);
	da=basic*3.5/100;
	printf("Dearness allownce:%d\n",da);
	hra=basic*8/100;
	printf("House allowance:%d\n",hra);
	ma=basic*4.5/100;
	printf("Medical allowance:%d\n",ma);
	pf=basic*12/100;
	gross=(basic+ta+da+hra+ma);
	printf("Your gross salary is:%d\n",gross);
	net=gross-pf;
	printf("Your net salary is:%d",net);
	getch();
}