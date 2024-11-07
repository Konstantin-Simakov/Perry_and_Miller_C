/* add_file.c */
/* This program adds data in the end of the file "book_info.txt" consited of this catalog. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * fptr;

    // File opening.
    fptr = fopen("book_info.txt", "a");
    if (NULL == fptr)
    {
        printf("Error -- couldn\'t open the file.\n");
        exit(EXIT_FAILURE);
    }

    // File adding.
    fprintf(fptr, "\nSoon I will buy some books!\n");
    fclose(fptr);

    return 0;
}
