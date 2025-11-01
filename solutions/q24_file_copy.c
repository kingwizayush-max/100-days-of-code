#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    
    sourceFile = fopen("source.txt", "r");
    
    if (sourceFile == NULL) {
        printf("Error: Source file 'source.txt' does not exist!\n");
        return 1;
    }
    
    destFile = fopen("destination.txt", "w");
    
    if (destFile == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(sourceFile);
        return 1;
    }
    
    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    
    printf("File copied successfully from source.txt to destination.txt\n");
    
    fclose(sourceFile);
    fclose(destFile);
    
    return 0;
}

