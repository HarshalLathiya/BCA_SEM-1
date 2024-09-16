#include<stdio.h>
// Write a C Program for escape sequence(\n,\t,\v,\b,\',\",\\)
	void main()
{
	clrscr();
	printf("This is for character\\n:");
	printf("\nHello\nBCA\n");
	printf("This is for character\\t:");
	printf("Hello\tBCA\n");
	printf("This is for character\\v:");
	printf("Hello\vBCA\n");
	printf("This is for character\\b:");
	printf("Hello\bBCA\n");
	printf("This is for character\\\\:");
	printf("\\\\Hello BCA\n");
	printf("This is for character\\\':");
	printf("'Hello BCA\'\n");
	printf("This is for character\\\":");
	printf("\"Hello BCA\" ");
	getch();
}