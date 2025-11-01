#include <stdio.h>
#include <string.h>

int main() {
    FILE *file1, *file2;
    char line1[200], line2[200];
    int lineNum = 1;
    int charPos = 0;
    
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    
    if (file1 == NULL || file2 == NULL) {
        printf("Error: Could not open one or both files!\n");
        return 1;
    }
    
    // Compare files line by line
    while (fgets(line1, sizeof(line1), file1) != NULL && 
           fgets(line2, sizeof(line2), file2) != NULL) {
        
        // Compare characters in current line
        int i = 0;
        while (line1[i] != '\0' && line2[i] != '\0') {
            if (line1[i] != line2[i]) {
                printf("Files differ at:\n");
                printf("Line: %d, Character position: %d\n", lineNum, i + 1);
                printf("File1 has: '%c'\n", line1[i]);
                printf("File2 has: '%c'\n", line2[i]);
                fclose(file1);
                fclose(file2);
                return 0;
            }
            i++;
        }
        
        // Check if one line is shorter
        if (line1[i] != line2[i]) {
            printf("Files differ at:\n");
            printf("Line: %d, Character position: %d\n", lineNum, i + 1);
            fclose(file1);
            fclose(file2);
            return 0;
        }
        
        lineNum++;
    }
    
    // Check if files have different lengths
    if (fgets(line1, sizeof(line1), file1) != NULL) {
        printf("Files differ: File1 has more lines starting at line %d\n", lineNum);
    } else if (fgets(line2, sizeof(line2), file2) != NULL) {
        printf("Files differ: File2 has more lines starting at line %d\n", lineNum);
    } else {
        printf("Files are identical.\n");
    }
    
    fclose(file1);
    fclose(file2);
    
    return 0;
}

