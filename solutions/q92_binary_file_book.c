#include <stdio.h>

struct Book {
    int id;
    float price;
};

int main() {
    struct Book books[5], readBooks[5];
    FILE *file;
    
    // Read book data from user
    printf("Enter details for 5 books:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Write to binary file
    file = fopen("books.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    fwrite(books, sizeof(struct Book), 5, file);
    fclose(file);
    
    printf("\nData written to books.dat successfully.\n");
    
    // Read from binary file
    file = fopen("books.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    fread(readBooks, sizeof(struct Book), 5, file);
    fclose(file);
    
    // Display read data
    printf("\nBooks read from file:\n");
    printf("----------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d: ID = %d, Price = %.2f\n", 
               i + 1, readBooks[i].id, readBooks[i].price);
    }
    
    return 0;
}

