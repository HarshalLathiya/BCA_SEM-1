#include<stdio.h>
//switch
	void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	switch(a)
	{
	case 10:
	printf("A is:10");
	break;
	case 20:
	printf("A is:20");
	break;
	case 30:
	printf("A is:30");
	default:
	break;
	printf("other number");
	}
	getch();
}