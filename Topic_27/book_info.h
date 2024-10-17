// book_info.h
// The header file consists of struct declaration 'struct Book_info'.

#define TITLE_SIZE  40
#define AUTHOR_SIZE 25
#define NUM_BOOKS   3

struct Book_info {
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
    double price;
    int pages;
};

