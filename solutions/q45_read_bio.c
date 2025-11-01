#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    file = fopen("bio.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'bio.txt' not found!\n");
        printf("Please create the file first using the write_bio program.\n");
        return 1;
    }
    
    printf("Contents of bio.txt:\n");
    printf("-------------------\n");
    
    // Read and display file contents
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    
    return 0;
}

