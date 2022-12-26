// name.c -- demonstrates NOT logical operation
#include <stdio.h>

int main(void)
{
	char last_name[25];
	char ans;

	printf("What\'s your last name? "
		"(Enter with upper letter!)\n");
	scanf(" %s", last_name);

	if (last_name[0] >= 'A' && last_name[0] <= 'Z' ||
		last_name[0] >= 'a' && last_name[0] <= 'z')
	{
		printf("To get ticket go to 2432 cabinet.\n");
	}
	else
		printf("Input error\n");

	return 0;
}
