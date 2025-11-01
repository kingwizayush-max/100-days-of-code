#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;
    
    // Check if filename provided
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    // Open file provided as command-line argument
    file = fopen(argv[1], "r");
    
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", argv[1]);
        return 1;
    }
    
    printf("Contents of '%s':\n", argv[1]);
    printf("-------------------\n");
    
    // Read and print file contents
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    
    return 0;
}

