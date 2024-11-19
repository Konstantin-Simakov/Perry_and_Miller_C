/* random_file_access.c */
/* The program writes letters from A to Z to the text file,
then reads them in reverse order. */
#include <stdio.h>      // For perror(), stdout.
#include <stdlib.h>
#include <errno.h>      // For global integer variable 'errno'.

const char * FILE_NAME = "letters.txt";
FILE * fptr = NULL;

int main(void)
{
    char letter;
    int file_length;
    int i;

    // Open a text file.
    fptr = fopen(FILE_NAME, "w+");
    if (!fptr)
    {
        fprintf(stderr, "errno: %d\n", errno);
        perror(FILE_NAME);
        // printf("Couldn\'t open the file %s.\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }

    // Write the data to the file.
    for (letter = 'A'; letter <= 'Z'; letter++)
        fputc(letter, fptr);
    puts("The file writing of letters from A to Z is complete.");   // Report this to the screen.

    // Read the data from the file in reverse order.
    fseek(fptr, 0L, SEEK_END);      // Move to the byte after last one in the file; fptr points to EOF.
    file_length = ftell(fptr);      // Calculate the length of the file.
    printf("\nThe file content in reverse order:\n");
    for (i = 1; i <= file_length; ++i)
    {
        if (fseek(fptr, -i, SEEK_END) == -1)
        {
            fprintf(stderr, "errno: %d\n", errno);
            perror("fseek()");
            exit(EXIT_FAILURE);
        }
        letter = fgetc(fptr);
        fputc(letter, stdout);
        // printf(" %d\n", letter);
    }
    putchar('\n');
    fclose(fptr);

    return 0;
}
