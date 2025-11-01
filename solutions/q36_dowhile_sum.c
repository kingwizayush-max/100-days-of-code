#include <stdio.h>

int main() {
    int num, sum = 0;
    
    // Use do-while loop to keep asking for numbers
    do {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    
    printf("\nSum of all numbers entered: %d\n", sum);
    
    return 0;
}

