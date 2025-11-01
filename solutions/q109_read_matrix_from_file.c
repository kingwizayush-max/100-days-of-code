#include <stdio.h>

int main() {
    FILE *file;
    int rows, cols;
    
    file = fopen("matrix.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'matrix.txt' not found!\n");
        return 1;
    }
    
    // Read dimensions (assuming first line has rows and cols)
    if (fscanf(file, "%d %d", &rows, &cols) != 2) {
        printf("Error reading matrix dimensions!\n");
        fclose(file);
        return 1;
    }
    
    int matrix[rows][cols];
    
    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (fscanf(file, "%d", &matrix[i][j]) != 1) {
                printf("Error reading matrix element at [%d][%d]\n", i, j);
                fclose(file);
                return 1;
            }
        }
    }
    
    fclose(file);
    
    // Display the matrix
    printf("Matrix read from file (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

