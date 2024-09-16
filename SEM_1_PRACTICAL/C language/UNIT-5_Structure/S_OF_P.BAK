#include<stdio.h>
#include<conio.h>
	struct abc
{
	int a,b,c;
};
	void main()
{
	struct abc obj,*p;
	clrscr();
	p=&obj;
	obj.a=10;
	obj.b=20;
	obj.c=30;
	printf("%d %d %d \n",obj.a,obj.b,obj.c);
	printf("\nUsing Pointer()\n");
	printf("%d %d %d\n",(*p).a,(*p).b,(*p).c);
	printf("\nSize of obj: %d",sizeof(obj));
	printf("\nSize of p: %d",sizeof(p));
	getch();
}