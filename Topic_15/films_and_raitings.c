// films_and_raitings.c
#include <stdio.h>
#include <string.h>			// For strcpy()

int main(void)
{
	int ctr, num_movies, rating, like_rating, hate_rating;
	char movie_name[40], like_movie[40], hate_movie[40];

	like_rating = 0;		// Begin value for this variable
	hate_rating = 10;		// Begin value for this variable

	do
	{
		printf("How many films have you being watched for this year? ");
		scanf(" %d", &num_movies);
		if (num_movies < 1)
		{
			printf("None of movies! How do you estimate it?\n");
			printf("Try again!\n\n");
		}
	} while (num_movies < 1);

	for (ctr = 1; ctr <= num_movies; ctr++)
	{
		printf("\nEnter a film name ");
		printf("(name is one word!) ");
		scanf(" %s", movie_name);

		printf("How would you estimate it "
			"on the scale from 1 to 10? ");
		scanf(" %d", &rating);

		if (rating > like_rating)
		{
			strcpy(like_movie, movie_name);
			like_rating = rating;
		}
		if (rating < hate_rating)
		{
			strcpy(hate_movie, movie_name);
			hate_rating = rating;
		}
	}
	// Output results
	printf("Your favourite film: %s.\n", like_movie);
	printf("Its rating: %d.\n", like_rating);
	printf("Your least film: %s.\n", hate_movie);
	printf("Its rating: %d.\n", hate_rating);

	return 0;
}
