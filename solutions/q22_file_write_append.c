#include <stdio.h>

int main() {
    char text[200];
    FILE *file;
    
    printf("Enter a line of text: ");
    gets(text);
    
    // Open file in append mode
    file = fopen("log.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write text to file
    fprintf(file, "%s\n", text);
    
    printf("Text successfully saved to log.txt\n");
    
    fclose(file);
    
    return 0;
}

