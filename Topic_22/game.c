/* game.c */
/* Demonstration of parallel arrays. */
#include <stdio.h>

#define NUM_GAMES 10

int main(void)
{
	int game_scores[NUM_GAMES] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
	int game_rebounds[NUM_GAMES] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
	int game_assists[NUM_GAMES] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
	int best_game = 0;
	int gm_mark = 0;
	int i;

	for (i = 0; i < NUM_GAMES; ++i)
	{
		if (game_scores[i] > best_game)
		{
			best_game = game_scores[i];
			gm_mark = i;
		}
	}

	// Print results of the best game.
	printf("\nPlayer scores in the best game:\n");
	printf("The best game is #%d\n", gm_mark + 1);
	printf("Got %d scores\n", game_scores[gm_mark]);
	printf("Rebounded %d balls\n", game_rebounds[gm_mark]);
	printf("Assisted %d balls\n", game_assists[gm_mark]);

	return 0;
}
