#include <stdio.h>

// Function with static local variable
int callCount() {
    static int count = 0;  // Static variable persists between calls
    count++;
    return count;
}

int main() {
    int n;
    
    printf("Enter number of times to call the function: ");
    scanf("%d", &n);
    
    printf("\nCalling function %d times:\n", n);
    for (int i = 0; i < n; i++) {
        int count = callCount();
        printf("Call %d: Function has been called %d time(s)\n", i + 1, count);
    }
    
    return 0;
}

