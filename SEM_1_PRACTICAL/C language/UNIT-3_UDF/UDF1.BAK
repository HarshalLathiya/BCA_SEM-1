#include<stdio.h>
#include<conio.h>
int a=100;//this is global vairable
void fun();//this is prototype
	void main()
{
	int b=50;//This is local variable
	clrscr();
	printf("Here is the global value A:%d",a);
	a=200;//now change global value
	printf("\nlocal value of main Body part value of variable B:%d",b);//local variable value
	fun();//now funcation calling
	getch();
}
	void fun()//funcation body
	{
	int c=55; //UDF body local variable
	printf("\nNow UDf body start");
	printf("\nlocal value of UDF Body part value of variable C ::%d",c);
	printf("\nGlobal value in UDF:%d",a);
	}