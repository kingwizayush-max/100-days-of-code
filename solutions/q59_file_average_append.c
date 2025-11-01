#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;
    
    file = fopen("numbers.txt", "r");
    
    if (file == NULL) {
        printf("Error: File 'numbers.txt' not found!\n");
        return 1;
    }
    
    // Read integers from file and calculate sum
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    
    fclose(file);
    
    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 1;
    }
    
    average = (float)sum / count;
    
    // Append average to file
    file = fopen("numbers.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }
    
    fprintf(file, "\nAverage: %.2f\n", average);
    
    printf("Average calculated: %.2f\n", average);
    printf("Average appended to numbers.txt\n");
    
    fclose(file);
    
    return 0;
}

