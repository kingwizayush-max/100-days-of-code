#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0, words = 0, chars = 0;
    int inWord = 0;
    
    file = fopen("textfile.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'textfile.txt' not found!\n");
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }
    
    // Count last word if file doesn't end with whitespace
    if (inWord) {
        words++;
    }
    
    // Count last line if file doesn't end with newline
    if (chars > 0) {
        lines++;
    }
    
    fclose(file);
    
    printf("File Statistics:\n");
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);
    
    return 0;
}

