#include <stdio.h>

int main() {
    void *ptr;
    int intValue = 100;
    float floatValue = 25.5;
    
    // Point void pointer to integer
    ptr = &intValue;
    printf("Void pointer pointing to int:\n");
    printf("Value: %d\n", *(int *)ptr);
    
    // Point void pointer to float
    ptr = &floatValue;
    printf("\nVoid pointer pointing to float:\n");
    printf("Value: %.2f\n", *(float *)ptr);
    
    // Demonstrate accessing with proper casting
    printf("\nDemonstrating type casting:\n");
    ptr = &intValue;
    printf("As int: %d\n", *(int *)ptr);
    
    ptr = &floatValue;
    printf("As float: %.2f\n", *(float *)ptr);
    
    return 0;
}

