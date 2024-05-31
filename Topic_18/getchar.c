/* getchar.c */
/* Simple demonstrating of the getchar() function. */
#include <stdio.h>
#include <string.h>

#define SLEN 25

int main(void)
{
	int i;
	char msg[SLEN];

	printf("Enter up to %d character and press Enter...\n", SLEN);
	for (i = 0; i < SLEN; ++i)
	{
		msg[i] = getchar();		// Input 1 character.
		if ('\n' == msg[i])
			break;
	}
	putchar('\n');				// Line break after loop completion.

	for (--i; i >= 0; --i)
		putchar(msg[i]);
	putchar('\n');

	return 0;
}
