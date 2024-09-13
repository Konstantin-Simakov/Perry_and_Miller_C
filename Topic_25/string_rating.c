/* string_raiting.c */
/* Demonstrates using an array of pointers. */
#include <stdio.h>
#include <ctype.h>

#define CURRENT_YEAR    2024
#define NUM_MOVIES      9

int main(void)
{
    int ctr = 0;                        // For printing watched only films.
    char ans;
    char * movies[NUM_MOVIES] = {
        "Amour",
        "Argo",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Les Miserables",
        "Life of Pi",
        "Lincoln",
        "Silver Linings Playbook",
        "Zero Dark Thirty"
    };
    int movie_ratings[9];
    char * temp_movie = NULL;           // Empty pointer.
    int i, j, did_swap, temp_rating;    // For sorting loop and other simple stuff.

    printf("\n\n*** Oscar nomination %d! ***\n\n", CURRENT_YEAR);
    printf("It\'s time to rate the best candidates for award:");
    for (i = 0; i < 9; ++i)
    {
        printf("\nDid you see %s? (Y/N) ", movies[i]);
        scanf(" %c", &ans);        
        if (toupper(ans) == 'Y')
        {
            printf("What is your raiting in the scale from 1 to 10: ");
            scanf(" %d", &movie_ratings[i]);
            ctr++;       
        }
        else
            movie_ratings[i] = -1;
    }

    // Sort the pointers to films by raiting in descending order
    // (unwatched films will be from below).
    for (i = 0; i < NUM_MOVIES - 1; ++i)
    {
        did_swap = 0;
        for (j = 0; j < NUM_MOVIES - 1 - i; ++j)
        {
            if (movie_ratings[j] < movie_ratings[j + 1])
            {
                // 1st (predicate) swap.
                temp_rating = movie_ratings[j];
                movie_ratings[j] = movie_ratings[j + 1];
                movie_ratings[j + 1] = temp_rating;

                // 2nd (target) swap.
                temp_movie = movies[j];
                movies[j] = movies[j + 1];
                movies[j + 1] = temp_movie;

                did_swap = 1;
            }
        }
        if (!did_swap)
            break;
    }

    // Now display all films in order.
    printf("\n\n** Your film raitings to the Oscars %d **\n", CURRENT_YEAR);
    for (i = 0; i < ctr; ++i)
        printf("%s is rated %d!\n", movies[i], movie_ratings[i]);

    return 0;
}
