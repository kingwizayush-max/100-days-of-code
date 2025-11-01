#include <stdio.h>

// Function to swap upper and lower nibbles
unsigned char swapNibbles(unsigned char c) {
    // Extract upper 4 bits and shift right
    unsigned char upperNibble = (c & 0xF0) >> 4;
    
    // Extract lower 4 bits and shift left
    unsigned char lowerNibble = (c & 0x0F) << 4;
    
    // Combine swapped nibbles
    return upperNibble | lowerNibble;
}

int main() {
    unsigned char byte;
    
    printf("Enter a byte value (0-255): ");
    scanf("%hhu", &byte);
    
    printf("Original byte: 0x%02X (binary: ", byte);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf(")\n");
    
    unsigned char swapped = swapNibbles(byte);
    
    printf("Swapped byte: 0x%02X (binary: ", swapped);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (swapped >> i) & 1);
    }
    printf(")\n");
    
    return 0;
}

