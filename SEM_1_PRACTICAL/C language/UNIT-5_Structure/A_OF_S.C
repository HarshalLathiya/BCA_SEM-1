#include<stdio.h>
#include<conio.h>
//Write a C program to create structure for array of structure
		struct fybca
{
	int num;
};
	void main()
{
	struct fybca s[5];
	int i;
	clrscr();
	printf("Enter any Five value:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s[i].num);
	}
		printf("\nPrint value:");
	for(i=0;i<5;i++)
	{
		printf("\t%d",s[i].num);
	}
	getch();
}