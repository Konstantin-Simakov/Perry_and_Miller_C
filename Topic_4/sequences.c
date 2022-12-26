// sequences.c -- demonstrating control sequences
#include <stdio.h>

int main(void)
{
	float salary;

	printf("Column A\t Column B\t\t Column C\n");
	printf("My computer\'s Beep Sounds Like This:\a!\n");
	printf("\"Let\'s fix that typo and then show the backslash ");
	printf("character \\\" she said.\n");
	printf("I have growth on %d%% in learning programming!\n", 5);
	printf("How many dollars would you have to: $______\b\b\b\b\b\b");
	scanf(" %f", &salary);

	return 0;
}
