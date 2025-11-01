#include <stdio.h>

int main() {
    FILE *file1, *file2, *merged;
    char ch;
    
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error: File 'file1.txt' not found!\n");
        return 1;
    }
    
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error: File 'file2.txt' not found!\n");
        fclose(file1);
        return 1;
    }
    
    merged = fopen("merged.txt", "w");
    if (merged == NULL) {
        printf("Error: Cannot create 'merged.txt'!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    
    // Copy contents of file1 to merged
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, merged);
    }
    
    // Add a newline separator
    fputc('\n', merged);
    
    // Copy contents of file2 to merged
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, merged);
    }
    
    printf("Files merged successfully into merged.txt\n");
    
    fclose(file1);
    fclose(file2);
    fclose(merged);
    
    return 0;
}

