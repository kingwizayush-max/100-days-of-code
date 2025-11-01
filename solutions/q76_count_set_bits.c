#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Count set bits (1s) in binary representation
    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }
    
    printf("Number of set bits: %d\n", count);
    
    return 0;
}

