/* putchar.c */
/* Simple demonstrating of the putchar() function. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char msg[] = "C is funny.";

	for (i = 0; i < strlen(msg); ++i)
		putchar(msg[i]);
	putchar('\n');

	return 0;
}
