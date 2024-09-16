#include<stdio.h>
#include<conio.h>
	void main()
{
	int arr[2][3],i,j;
	clrscr();
	arr[0][0]=23;
	arr[0][1]=32;
	arr[0][2]=54;

	arr[1][0]=56;
	arr[1][1]=78;
	arr[1][2]=98;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
		getch();
}

