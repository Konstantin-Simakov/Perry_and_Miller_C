/* even_or_odd.c */
/* Even or odd number desplayed in the loop on the screen with the message. */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; ++i)
	{
		if (i % 2 == 1)
		{
			printf("Odd numbers are nothing but inconvenience...\n");
			continue;
		}
		printf("Whether it's even numbers!\n");	
	}

	return 0;
}
