#include<stdio.h>
#include<conio.h>
//Write a C program to create a structure for array within structure.
	struct fybca
{
	char name[10];
	int mark[5];
};
	void main()
{
	struct fybca s;
	int i;
	clrscr();
	printf("Enter your name:");
	scanf("%s",&s.name);
	for(i=0;i<5;i++)
	{
		printf("Enter your mark:");
		scanf("%d",&s.mark[i]);
	}
		printf("\nName is :%s",s.name);
		for(i=0;i<5;i++)
		{
		printf("\nmark is :%d",s.mark[i]);
		}
		getch();
}
