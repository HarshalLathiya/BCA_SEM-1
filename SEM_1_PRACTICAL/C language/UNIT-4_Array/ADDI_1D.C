#include<stdio.h>
#include<conio.h>
//Write a C Program for sum of 1D array.
	void main()
{
	int a[3],b[3],c[3],i;
	clrscr();
	printf("Enter Value of A Matrix:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Value of B Matrix:\n");
		for(i=0;i<3;i++)
		{
			scanf("%d",&b[i]);
		}
		printf("Result of A+B:\n");
		for(i=0;i<3;i++)
		{
			c[i]=a[i]+b[i];
			printf("%d\n",c[i]);
		}
		getch();
}

