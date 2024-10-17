/* pointer_struct.c */
/* The program demonstrates working with pointer to structures. */
#include <stdio.h>
#include <stdlib.h>
#include "book_info.h"      // Include the struct declaration.

int main(void)
{
    int ctr;
    struct Book_info * p_books[NUM_BOOKS];

    // Data creating and input.
    for (ctr = 0; ctr < NUM_BOOKS; ctr++)
    {
        // Create the dynamic structure variable.
        p_books[ctr] = (struct Book_info *) malloc(sizeof(struct Book_info)); 
        if (!p_books[ctr])
        {
            puts("Memory error!");
            exit(EXIT_FAILURE);
        }

        // Enter a title of a book.
        printf("\nEnter a book name #%d: ", ctr + 1);
        gets(p_books[ctr]->title);

        // Enter an author of the book.
        printf("Who\'s author? ");
        gets(p_books[ctr]->author);

        // Enter a cost of the book.
        printf("How many does the book cost? ");
        scanf(" $%lf", &p_books[ctr]->price);

        // Enter a number of pages of the book.
        printf("How many pages are there in the book? ");
        scanf(" %d", &p_books[ctr]->pages);              

        getchar();          // For the cycle to work properly.
    }

    // Data output.
    puts("\nThe book collection:");
    for (ctr = 0; ctr < NUM_BOOKS; ctr++)
    {
        printf("#%d: %s by %s\n", ctr + 1, 
                p_books[ctr]->title, p_books[ctr]->author);
        printf("It contains %d pages and costs $%.2f.\n\n", 
                p_books[ctr]->pages, p_books[ctr]->price);
    }

    // Free data.
    for (ctr = 0; ctr < NUM_BOOKS; ctr++)
        free(p_books[ctr]);

    return 0;
}
