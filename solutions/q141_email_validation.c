#include <stdio.h>
#include <string.h>

// Function to validate email address
int isValidEmail(const char *email) {
    int atCount = 0;
    int dotAfterAt = 0;
    int atIndex = -1;
    
    // Count @ symbols and find position
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            atCount++;
            atIndex = i;
        }
    }
    
    // Must have exactly one @
    if (atCount != 1) {
        return 0;
    }
    
    // Check if there's at least one . after @
    for (int i = atIndex + 1; email[i] != '\0'; i++) {
        if (email[i] == '.') {
            dotAfterAt = 1;
            break;
        }
    }
    
    return dotAfterAt;
}

int main() {
    char email[100];
    
    printf("Enter an email address: ");
    gets(email);
    
    if (isValidEmail(email)) {
        printf("'%s' is a valid email address.\n", email);
    } else {
        printf("'%s' is not a valid email address.\n", email);
    }
    
    return 0;
}

