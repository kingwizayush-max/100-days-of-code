#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char word[50], buffer[200];
    int count = 0;
    
    printf("Enter the word to search: ");
    scanf("%s", word);
    
    file = fopen("textfile.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'textfile.txt' not found!\n");
        return 1;
    }
    
    // Search for word in file
    while (fscanf(file, "%s", buffer) != EOF) {
        // Convert to lowercase for case-insensitive search
        for (int i = 0; buffer[i]; i++) {
            buffer[i] = tolower(buffer[i]);
        }
        
        // Create lowercase copy of search word
        char lowerWord[50];
        for (int i = 0; word[i]; i++) {
            lowerWord[i] = tolower(word[i]);
            lowerWord[i + 1] = '\0';
        }
        
        if (strcmp(buffer, lowerWord) == 0) {
            count++;
        }
    }
    
    fclose(file);
    
    printf("The word '%s' appears %d time(s) in the file.\n", word, count);
    
    return 0;
}

