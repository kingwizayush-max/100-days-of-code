#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Run-length encoding: ");
    
    int len = strlen(str);
    int count = 1;
    
    for (int i = 0; i < len; i++) {
        if (i < len - 1 && str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    
    printf("\n");
    
    return 0;
}

