#include<stdio.h>
#include<conio.h>
void main()
{
       int a[2][2]={1,2,3,4};
       int b[2][2]={1,4,2,5};
       int c[2][2],i,j;
	clrscr();
	c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	c[1][0]=a[1][1]*b[1][0]+a[1][0]*b[0][0];
	c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}