#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int saddleFound = 0;
    
    // Find saddle point
    for (int i = 0; i < rows; i++) {
        // Find minimum in row i
        int minInRow = matrix[i][0];
        int minCol = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minInRow) {
                minInRow = matrix[i][j];
                minCol = j;
            }
        }
        
        // Check if this minimum is maximum in its column
        int isMaxInCol = 1;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][minCol] > minInRow) {
                isMaxInCol = 0;
                break;
            }
        }
        
        if (isMaxInCol) {
            printf("Saddle point found at row %d, column %d: %d\n", 
                   i, minCol, minInRow);
            saddleFound = 1;
        }
    }
    
    if (!saddleFound) {
        printf("No saddle point found in the matrix.\n");
    }
    
    return 0;
}

