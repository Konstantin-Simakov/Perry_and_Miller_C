/* write_file.c */
/* The program uses sequential access to files. */

#include "book_info.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct Book_info books[NUM_BOOKS];
    FILE * fptr = NULL;
    int ctr;

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

    // File opening.
    fptr = fopen("book_info.txt", "w");
    if (NULL == fptr)
    {
        printf("Error -- couldn\'t open the file.\n");
        exit(EXIT_FAILURE);
    }

    // File writing.
    fprintf(fptr, "\nThe book collection:\n");
    for (ctr = 0; ctr < NUM_BOOKS; ++ctr)
    {
        fprintf(fptr, "#%d: %s by %s\n", ctr + 1, 
                books[ctr].title, books[ctr].author);
        fprintf(fptr, "It contains %d pages and costs $%.2f.\n\n", 
                books[ctr].pages, books[ctr].price);
    }

    // File closing (always do it!).
    fclose(fptr);

    return 0;
}
