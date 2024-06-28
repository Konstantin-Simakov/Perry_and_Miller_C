/* rand.c */
/* Demonstrates random functions with "Dice" game. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
	int dice_1, dice_2;
	int total_1, total_2;
	char ans;

	srand(time(NULL));

	// First roll.
	dice_1 = rand() % 5 + 1;
	dice_2 = rand() % 5 + 1;
	total_1 = dice_1 + dice_2;
	printf("The first roll of dices: %d and %d with total %d.\n", 
		dice_1, dice_2, total_1);
	do
	{
		puts("What do you think about the next roll?");
		puts("(H) Higher,  (L) Lower,  (S) Same\n");
		puts("Enter H, L, S according to your opinion.");
		scanf(" %c", &ans);
		ans = toupper(ans);
	} while (ans != 'H' && ans != 'L' && ans != 'S');

	// Second roll.
	dice_1 = rand() % 5 + 1;
	dice_2 = rand() % 5 + 1;
	total_2 = dice_1 + dice_2;
	printf("The first roll of dices: %d and %d with total %d.\n", 
		dice_1, dice_2, total_2);

	// Check user guessing.
	if ('L' == ans)
	{
		if (total_2 < total_1)
		{
			printf("Good work! You\'re right!\n");
			printf("%d is less than %d\n", total_2, total_1);
		}
		else
			printf("Sorry, %d is not less than %d\n", total_2, total_1);		
	}
	else if ('H' == ans)
	{
		if (total_2 > total_1)
		{
			printf("Good work! You\'re right!\n");
			printf("%d is more than %d\n", total_2, total_1);
		}
		else
			printf("Sorry, %d is not more than %d\n", total_2, total_1);				
	}
	else if ('S' == ans)
	{
		if (total_2 == total_1)
		{
			printf("Good work! You\'re right!\n");
			printf("%d equals %d\n", total_2, total_1);
		}
		else
			printf("Sorry, %d doesn\'t equals %d\n", total_2, total_1);					
	}

	return 0;
}
