// getchar_advance.
// Demonstrates advanced using of getchar() function.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	// EOF (on keyboard).
	// Linux, Mac OS: <Ctrl+D>, Windows: <Ctrl+Z>
	while ((ch = getchar()) != EOF)		// EOF -- end of file.
		putchar(toupper(ch));

	return 0;
}
