#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Try to open a non-existent file
    file = fopen("nonexistent.txt", "r");
    
    // Check if file pointer is NULL
    if (file == NULL) {
        printf("Error: File 'nonexistent.txt' does not exist!\n");
        printf("The program handled the error gracefully without crashing.\n");
        return 1;
    }
    
    // This code won't execute if file is NULL
    printf("File opened successfully.\n");
    
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    
    return 0;
}

