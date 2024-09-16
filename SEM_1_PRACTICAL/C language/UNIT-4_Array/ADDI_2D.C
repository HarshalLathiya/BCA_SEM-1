#include<stdio.h>
#include<conio.h>
//write a C program for 2D array Addition of Matrix.
	void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("Enter 3*3 A Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 3*3 B Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Result Of A+B Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
			printf("\n");
		}
	}
	getch();
}
