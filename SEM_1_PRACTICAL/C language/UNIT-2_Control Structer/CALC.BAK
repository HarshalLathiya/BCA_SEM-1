#include<stdio.h>
#include<conio.h>
//Write a C program to create Calculator
	void main()
{
	char op;
	int num1,num2,result;
	clrscr();
//input operator from user
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter two number:\n");
	scanf("%d %d",&num1,&num2);
	switch(op)
	{
	case'+':
	result=num1+num2;
	printf("Result:%d\n",result);
	break;
	case'-':
	result=num1-num2;
	printf("Result:%d\n",result);
	break;
	case'*':
	result=num1*num2;
	printf("Result:%d\n",result);
	break;
	case'/':
	if(num2 != 0)
	{
		result=num1/num2;
		printf("Result:%d\n",result);
		break;
	}
		else
	 {
	 printf("Division by 0 \n");
	 }
	 break;
	 default:
	 printf("Invalid Operator");
}
	getch();
}

