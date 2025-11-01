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
    
    // Calculate sum of main diagonal elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    
    printf("\nSum of main diagonal elements: %d\n", sum);
    
    return 0;
}

