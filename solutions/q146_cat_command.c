#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;
    
    if (argc < 2) {
        printf("Usage: %s <file1> [file2] [file3] ...\n", argv[0]);
        return 1;
    }
    
    // Process each file provided as command-line argument
    for (int i = 1; i < argc; i++) {
        file = fopen(argv[i], "r");
        
        if (file == NULL) {
            printf("Error: Cannot open file '%s'\n", argv[i]);
            continue;
        }
        
        printf("\n=== Contents of %s ===\n", argv[i]);
        
        // Print file contents
        while ((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }
        
        printf("\n");
        fclose(file);
    }
    
    return 0;
}

