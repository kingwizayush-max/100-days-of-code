#include <stdio.h>

struct Flags {
    unsigned int is_visible : 1;
    unsigned int is_editable : 1;
    unsigned int is_printable : 1;
    unsigned int : 5;  // Padding to make it exactly 1 byte
};

int main() {
    struct Flags flags;
    
    // Set flags
    flags.is_visible = 1;
    flags.is_editable = 1;
    flags.is_printable = 0;
    
    printf("Flags status:\n");
    printf("is_visible: %d\n", flags.is_visible);
    printf("is_editable: %d\n", flags.is_editable);
    printf("is_printable: %d\n", flags.is_printable);
    
    printf("\nSize of struct Flags: %zu bytes\n", sizeof(struct Flags));
    
    // Change flags
    printf("\nChanging flags...\n");
    flags.is_printable = 1;
    flags.is_editable = 0;
    
    printf("Updated flags:\n");
    printf("is_visible: %d\n", flags.is_visible);
    printf("is_editable: %d\n", flags.is_editable);
    printf("is_printable: %d\n", flags.is_printable);
    
    return 0;
}

