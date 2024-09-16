#include <stdio.h>
void main()
{
    float c, cf, html, maths, pra1, pra2, total, per;
    char name[50];  // Change 'name' to an array of characters to store a name.
    clrscr();
    printf("\t\t\t\tMY MARKSHEET\n");
    printf("\t\t\t\t____________\n");
    printf("Enter Student name: ");
    scanf("%s", name); // Use the correct format specifier for a string.

    printf("Enter C language Marks: ");
    scanf("%f", &c);

    printf("Enter Computer fundamental Marks: ");
    scanf("%f", &cf);

    printf("Enter Networking Marks: ");
    scanf("%f", &html);

    printf("Enter Maths Marks: ");
    scanf("%f", &maths);

    printf("Enter C practical Marks: ");
    scanf("%f", &pra1);

    printf("Enter HTML practical Marks: "); // Corrected the prompt message.
    scanf("%f", &pra2);

    total = c + cf + html + maths + pra1 + pra2;
    per = (total / 300) * 100; // Calculate percentage correctly.

    printf("\n\nThe percentage is: %.2f", per);

    if (per < 20)
	printf("\nSorry, you have failed");
    else if (per >= 20 && per <= 30)
	printf("\nYou got third class");
    else if (per > 30 && per <= 40)
	printf("\nYou got second class");
    else if (per > 40 && per <= 45)
	printf("\nYou got first class");
    else if (per > 45 && per <= 100) // Adjusted the upper limit.
	printf("\nYou got distinction");
    else
    {
	printf("\nPlease enter your marks between 0 to 100......");
    }

    getch();
}