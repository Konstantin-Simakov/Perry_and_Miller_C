/* book_struct.c */
/* The program demonstrates working with C structures. */
#include <stdio.h>
#include "book_info.h"      // Include the struct declaration.

int main(void)
{
    int ctr;
    struct Book_info books[NUM_BOOKS];

    // Data input.
    for (ctr = 0; ctr < NUM_BOOKS; ctr++)
    {
        // Enter a title of a book.
        printf("\nEnter a book name #%d: ", ctr + 1);
        gets(books[ctr].title);

        // Enter an author of the book.
        printf("Who\'s author? ");
        gets(books[ctr].author);

        // Enter a cost of the book.
        printf("How many does the book cost? ");
        scanf(" $%lf", &books[ctr].price);

        // Enter a number of pages of the book.
        printf("How many pages are there in the book? ");
        scanf(" %d", &books[ctr].pages);              

        getchar();          // For the cycle to work properly.
    }

    // Data output.
    puts("\nThe book collection:");
    for (ctr = 0; ctr < NUM_BOOKS; ctr++)
    {
        printf("#%d: %s by %s\n", ctr + 1, 
                books[ctr].title, books[ctr].author);
        printf("It contains %d pages and costs $%.2f.\n\n", 
                books[ctr].pages, books[ctr].price);
    }

    return 0;
}
