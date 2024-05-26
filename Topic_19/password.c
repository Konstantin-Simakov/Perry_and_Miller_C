/* password.c */
/* Interest program about password creating. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 25

int main(void)
{
	int i;
	int has_upper, has_lower, has_digit;
	char user[SIZE], password[SIZE];

	has_upper = has_lower = has_digit = 0;
	printf("What is your name? ");
	scanf(" %s", user);
	printf("Please guess the password: ");
	scanf(" %s", password);

	for (i = 0; i < strlen(password); ++i)
	{
		if (isdigit(password[i]))
		{
			has_digit = 1;
			continue;
		}
		if (isupper(password[i]))
		{
			has_upper = 1;
			continue;
		}
		if (islower(password[i]))
		{
			has_lower = 1;
			continue;
		}
	}

	if (has_digit && has_upper && has_lower)
	{
		printf("Good work, %s,\n", user);
		printf("your password consists of uppercase, lowercase letters ");
		printf("and digits.\n");
	}
	else
	{
		printf("\n\nGuess a new password, %s,\n", user);
		printf("that will consist of uppercase, lowercase letters "
			"and digits.\n");
	}

	return 0;
}
