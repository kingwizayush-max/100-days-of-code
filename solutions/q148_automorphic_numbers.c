#include <stdio.h>
#include <math.h>

// Function to check if a number is automorphic
int isAutomorphic(int num) {
    long long square = (long long)num * num;
    int original = num;
    int digits = 0;
    
    // Count digits in original number
    while (original > 0) {
        digits++;
        original /= 10;
    }
    
    // Extract last 'digits' digits from square
    long long divisor = 1;
    for (int i = 0; i < digits; i++) {
        divisor *= 10;
    }
    
    return (square % divisor == num);
}

int main() {
    int start, end;
    
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    
    printf("\nAutomorphic numbers in range [%d, %d]:\n", start, end);
    
    int found = 0;
    for (int i = start; i <= end; i++) {
        if (isAutomorphic(i)) {
            printf("%d (square = %lld)\n", i, (long long)i * i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No automorphic numbers found in the given range.\n");
    }
    
    return 0;
}

