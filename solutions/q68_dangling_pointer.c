#include <stdio.h>

// Function that returns a dangling pointer
int* getLocalAddress() {
    int local = 100;
    printf("Address of local variable inside function: %p\n", &local);
    return &local; // Dangling pointer warning!
}

int main() {
    int *ptr = getLocalAddress();
    
    printf("Address returned by function: %p\n", ptr);
    printf("Attempting to access value: %d\n", *ptr); // Undefined behavior!
    
    printf("\nWarning: This demonstrates a dangling pointer. ");
    printf("Accessing *ptr is unsafe because the local variable is out of scope.\n");
    
    return 0;
}

