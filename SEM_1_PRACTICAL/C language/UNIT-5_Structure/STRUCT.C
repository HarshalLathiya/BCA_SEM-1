#include<stdio.h>
#include<conio.h>
//Write  of program structure
struct bca
{
  int a,b;
  float c,d;
};
  void main()
{
	struct bca s;
	clrscr();
	s.a=10;
	s.b=20;
	s.c=25.5;
	s.d=35.5;
	printf("Sizeof S Variable:%d\n",sizeof(s));
	printf("Value of A:%d\t Value of B:%d\n\n",s.a,s.b);
	printf("Sizeof C Variable:%d\t",sizeof(s.c));
	printf("Sizeof D Variable:%d\n",sizeof(s.d));
	printf("Value of C:%f\t Value of D:%f",s.c,s.d);
	getch();
}


