#include <stdio.h>
#include <stdarg.h>

// Function that takes variable number of arguments and returns product
int product(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int result = 1;
    
    for (int i = 0; i < count; i++) {
        result *= va_arg(args, int);
    }
    
    va_end(args);
    
    return result;
}

int main() {
    int count;
    
    printf("Enter number of integers: ");
    scanf("%d", &count);
    
    if (count <= 0) {
        printf("Invalid count!\n");
        return 1;
    }
    
    int numbers[count];
    printf("Enter %d integers: ", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Calculate product using variable arguments
    int result = product(count, numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    
    // For more than 5 arguments, we'd need to pass them differently
    // This example works for up to 5 numbers
    if (count <= 5) {
        printf("Product: %d\n", result);
    } else {
        printf("This example handles up to 5 numbers.\n");
    }
    
    return 0;
}

