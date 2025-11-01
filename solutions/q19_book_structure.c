#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];
    
    // Read details of 3 books
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);
        printf("Title: ");
        getchar(); // Clear buffer
        gets(books[i].title);
        printf("Author: ");
        gets(books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Find book with highest price
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }
    
    // Display book with highest price
    printf("\nBook with highest price:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %.2f\n", books[maxIndex].price);
    
    return 0;
}

