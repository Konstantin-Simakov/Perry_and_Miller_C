// happy_level.c -- estimates the user happy level
#include <stdio.h>

#define CUR_YEAR 2022

int main(void)
{
	int prefer;

	printf("How happy are you (on a scale of 1-10)?\n");
	scanf(" %d", &prefer);
	if (prefer >= 8)
	{
		printf("Cangratulations!\n");
		printf("You are OK.\n");
	}
	else if (prefer >= 5)
	{
		printf("It is slightly above average, isn\'t it?\n");
		printf("May be soon all becomes more better!\n");
	}
	else if (prefer >= 3)
	{
		printf("Sorry, you are not very fine.\n");
		printf("Hope, soon all will correct...\n");
	}
	else
	{
		printf("Hold on because all will correct, won\'t it?\n");
		printf("It always gets dark before dawn.\n");
	}

	return 0;
}
