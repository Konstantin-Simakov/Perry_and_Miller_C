/* average_scores.c */
/* Working with number arrays and loops. */
#include <stdio.h>

#define NUM_SCORES 10

int main(void)
{
	// Initialize first 6 scores.
	int game_scores[NUM_SCORES] = {12, 5, 21, 15, 32, 10};
	int total_points = 0;
	int i;
	float avg;

	// Request for the last 4 scores.
	for (i = 6; i < NUM_SCORES; ++i)
	{
		printf("Player score for the game #%d: ", i + 1);
		scanf(" %d", &game_scores[i]);
	}
	// Calculate average for all scores.
	for (i = 0; i < NUM_SCORES; ++i)
		total_points += game_scores[i];
	avg = (float) total_points / NUM_SCORES;

	// Output of results.
	printf("\n\nAverage scores of the player: %.1f.\n", avg);

	return 0;
}
