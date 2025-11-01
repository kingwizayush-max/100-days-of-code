#include <stdio.h>
#include <string.h>

int main() {
    FILE *source, *dest;
    char sourceFile[100], word[50], buffer[200];
    char destFile[] = "output.txt";
    
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    
    printf("Enter word to replace: ");
    scanf("%s", word);
    
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }
    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(source);
        return 1;
    }
    
    // Read and replace words
    while (fscanf(source, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) == 0) {
            fprintf(dest, "REDACTED ");
        } else {
            fprintf(dest, "%s ", buffer);
        }
    }
    
    printf("Word replacement complete. Result written to %s\n", destFile);
    
    fclose(source);
    fclose(dest);
    
    return 0;
}

