/* change_file_content.c */
/* The program changes file content with random access. */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

const char * FILE_NAME = "letters.txt";
FILE * fptr = NULL;

int main(void)
{
    int letter;
    int num;

    // File opening.
    fptr = fopen(FILE_NAME, "r+");
    if (!fptr)
    {
        fprintf(stderr, "errno: %d\n", errno);
        perror(FILE_NAME);
        exit(EXIT_FAILURE);
    }

    // File processing.
    printf("What letter number is needed to be replaced? (1 - 26) \n");
    scanf(" %d", &num); 
    fseek(fptr, num - 1, SEEK_SET);     // Search for the letter from the beginning of the file.
    fputc('*', fptr);                   // Replace this letter with '*' character.

    // File printing.
    // Return to the beginning of the file and print its content.
    rewind(fptr);                       // It's equivalent to fseek(fptr, 0, SEEK_SET); 
    puts("This is what file looks like now:");
    while ((letter = fgetc(fptr)) != EOF)
        fputc(letter, stdout);
    putchar('\n');
    fclose(fptr);

    return 0;
}
