#include <stdio.h>

// Define the structure named 'book'
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[14];
    float price;
};

int main() {
    // Declare and initialize a variable of the structure type 'book'
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values of the fields
    printf("Book Information:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}