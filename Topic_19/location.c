/* location.c */
/* Demonstrates using the puts(), gets(), strcat() functions. */
#include <stdio.h>
#include <string.h>

#define SIZE 15

int main(void)
{
	char city[SIZE];
	char region[SIZE];
	char full_location[(2 * SIZE) + 1] = "";

	puts("What city do you live? ");
	gets(city);
	puts("What region do you live? ");
	gets(region);

	strcat(full_location, city);
	strcat(full_location, ", ");
	strcat(full_location, region);

	puts("\nYou live in:");
	puts(full_location);

	return 0;
}
