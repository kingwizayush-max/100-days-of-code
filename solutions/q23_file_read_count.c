#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int chars = 0, spaces = 0, lines = 0;
    
    file = fopen("source.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'source.txt' not found!\n");
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        
        if (ch == ' ') {
            spaces++;
        }
        
        if (ch == '\n') {
            lines++;
        }
    }
    
    // Count last line if file doesn't end with newline
    lines++;
    
    fclose(file);
    
    printf("Statistics for source.txt:\n");
    printf("Total characters: %d\n", chars);
    printf("Total spaces: %d\n", spaces);
    printf("Total lines: %d\n", lines);
    
    return 0;
}

