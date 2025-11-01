#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    
    int matrix[size][size];
    
    printf("Enter elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if identity matrix
    int isIdentity = 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                // Diagonal should be 1
                if (matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                // Non-diagonal should be 0
                if (matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if (!isIdentity) {
            break;
        }
    }
    
    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
    
    return 0;
}

