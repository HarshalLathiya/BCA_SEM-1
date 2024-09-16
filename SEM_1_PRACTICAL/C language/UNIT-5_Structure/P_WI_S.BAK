#include<stdio.h>
#include<conio.h>
//Write a C program to create structure for pointer within structure
	struct abc
{
	int a,*b;
};
	void main()
{
	struct abc obj;
	clrscr();
		obj.a=10;
		printf("Address of A:%p\n",&obj.a);
		printf("Value of A:%d\n",&obj.a);
		obj.b=&obj.a;
		printf("Address of pointer B:%p\n",obj.b);
		printf("Content of pointer B:%d\n",*obj.b);
		obj.a=20;
		printf("Address of Pointer A:%p\n",&obj.a);
		printf("Content of Pointer A:%d\n",*&obj.a);
		*obj.b=5;
		printf("Address of A:%p\n",&obj.a);
		printf("Value of A:%d\n",&obj.a);
		printf("Address of pointer B:%p\n",obj.b);
		printf("Content of pointer B:%d\n",*obj.b);
		getch();
}