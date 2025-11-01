#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;      // Pointer to integer
    int **pptr = &ptr;    // Pointer to pointer
    
    printf("Value of num: %d\n", num);
    printf("Value using ptr: %d\n", *ptr);
    printf("Value using double pointer (pptr): %d\n", **pptr);
    
    printf("\nAddresses:\n");
    printf("Address of num: %p\n", &num);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);
    printf("Address stored in pptr: %p\n", pptr);
    printf("Address of pptr: %p\n", &pptr);
    
    return 0;
}

