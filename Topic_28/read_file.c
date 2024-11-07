/* read_file */
/* This program read data written by "write_file.c" program consited of this catalog. */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(void)
{
    FILE * fptr;
    char file_line[SIZE];

    // File opening.
    fptr = fopen("book_info.txt", "r");
    if (NULL == fptr)
    {
        printf("Error -- couldn\'t open the file.\n");
        exit(EXIT_FAILURE);
    }

    // File reading and data processing.
    while (!feof(fptr))
    {
        fgets(file_line, SIZE, fptr);
        if (!feof(fptr))
            fputs(file_line, stderr);
    }

    // File closing.
    fclose(fptr);

    return 0;
}
