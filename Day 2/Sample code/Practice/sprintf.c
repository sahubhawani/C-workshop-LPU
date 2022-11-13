// C program to implement
// the sprintf() function
#include <stdio.h>

// Driver code
int main()
{
	char str[50];
	int a = 2, b = 8;

	// The string "2 and 8 are even number"
	// is now stored into str
	sprintf(str, "%d and %d are even number",
			a, b);

	// Displays the string
	printf("%s", str);
	return 0;
}
