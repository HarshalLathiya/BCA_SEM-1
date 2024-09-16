#include<stdio.h>
#include<conio.h>
	void main()
{
	int arr[2][2][2]={10,20,30,40,50,60,70,80};
	int i;
	int j;
	int k;
	clrscr();
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	for(k=0;k<2;k++)
	{
	printf("%d\t",arr[i][j][k]);
	}
	printf("\n");
	}
	printf("\n");
	}
	getch();
}