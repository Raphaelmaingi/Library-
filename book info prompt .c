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
    // Declare a variable of the structure type 'book'
    struct book userBook;

    // Prompt the user to enter values
    printf("Enter the details for a book.\n");
    printf("Enter title: ");
    scanf(" %[^\n]%*c", userBook.title);
    printf("Enter author: ");
    scanf(" %[^\n]%*c", userBook.author);
    printf("Enter publication year: ");
    scanf("%d", &userBook.publication_year);
    printf("Enter ISBN: ");
    scanf("%s", userBook.ISBN);
    printf("Enter price: ");
    scanf("%f", &userBook.price);

    // Print the user-entered values
    printf("\nUser Entered Book Information:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}