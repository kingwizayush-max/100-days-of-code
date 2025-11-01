#include <stdio.h>

int main() {
    int rows, cols, zeros = 0, totalElements;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    totalElements = rows * cols;
    
    int matrix[rows][cols];
    
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
            if (matrix[i][j] == 0) {
                zeros++;
            }
        }
    }
    
    // Check if sparse matrix (more than half are zeros)
    if (zeros > totalElements / 2) {
        printf("\nThe matrix is a sparse matrix.\n");
        printf("Zero elements: %d out of %d (%.2f%%)\n", 
               zeros, totalElements, (float)zeros * 100 / totalElements);
    } else {
        printf("\nThe matrix is not a sparse matrix.\n");
        printf("Zero elements: %d out of %d (%.2f%%)\n", 
               zeros, totalElements, (float)zeros * 100 / totalElements);
    }
    
    return 0;
}

