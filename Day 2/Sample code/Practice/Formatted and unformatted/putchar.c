// C program to implement
// the putchar() function
#include <conio.h>
#include <stdio.h>

// Driver code
int main()
{
	char ch;
	printf("Enter any character: ");

	// Reads a character
	ch = getchar();

	// Displays that character
	putchar(ch);
	return 0;
}
