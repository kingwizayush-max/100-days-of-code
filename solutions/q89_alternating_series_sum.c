#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Calculate sum: 1 - 2 + 3 - 4 + 5 - ...
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;  // Odd positions: add
        } else {
            sum -= i;  // Even positions: subtract
        }
    }
    
    printf("Sum of the series: %d\n", sum);
    
    return 0;
}

