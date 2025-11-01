#include <stdio.h>

union DataType {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union DataType data;
    
    // Assign and display integer value
    data.intValue = 100;
    printf("After assigning integer value:\n");
    printf("intValue: %d\n", data.intValue);
    printf("floatValue: %.2f\n", data.floatValue);
    printf("charValue: %c\n", data.charValue);
    
    // Assign float value (this will corrupt the integer value)
    data.floatValue = 25.5;
    printf("\nAfter assigning float value:\n");
    printf("intValue: %d (corrupted)\n", data.intValue);
    printf("floatValue: %.2f\n", data.floatValue);
    printf("charValue: %c (corrupted)\n", data.charValue);
    
    return 0;
}

