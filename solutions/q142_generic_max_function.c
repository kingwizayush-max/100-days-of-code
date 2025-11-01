#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison functions for different types
int compareInt(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return (int_a > int_b) - (int_a < int_b);
}

int compareFloat(const void *a, const void *b) {
    float float_a = *(float *)a;
    float float_b = *(float *)b;
    return (float_a > float_b) - (float_a < float_b);
}

int compareChar(const void *a, const void *b) {
    char char_a = *(char *)a;
    char char_b = *(char *)b;
    return (char_a > char_b) - (char_a < char_b);
}

// Generic max function
void* genericMax(void *arr, int size, size_t elemSize, int (*compare)(const void *, const void *)) {
    void *max = arr;
    
    for (int i = 1; i < size; i++) {
        void *current = (char *)arr + i * elemSize;
        if (compare(current, max) > 0) {
            max = current;
        }
    }
    
    return max;
}

int main() {
    // Test with integers
    int intArr[] = {5, 2, 8, 1, 9};
    int *intMax = (int *)genericMax(intArr, 5, sizeof(int), compareInt);
    printf("Max integer: %d\n", *intMax);
    
    // Test with floats
    float floatArr[] = {3.5, 7.2, 1.8, 9.1, 4.3};
    float *floatMax = (float *)genericMax(floatArr, 5, sizeof(float), compareFloat);
    printf("Max float: %.2f\n", *floatMax);
    
    // Test with characters
    char charArr[] = {'z', 'a', 'm', 'k', 'b'};
    char *charMax = (char *)genericMax(charArr, 5, sizeof(char), compareChar);
    printf("Max character: %c\n", *charMax);
    
    return 0;
}

