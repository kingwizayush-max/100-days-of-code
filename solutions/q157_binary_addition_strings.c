#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char bin1[100], bin2[100], result[101];
    int len1, len2, maxLen;
    int carry = 0, sum;
    
    printf("Enter first binary number: ");
    gets(bin1);
    
    printf("Enter second binary number: ");
    gets(bin2);
    
    len1 = strlen(bin1);
    len2 = strlen(bin2);
    maxLen = (len1 > len2) ? len1 : len2;
    
    // Reverse strings for easier addition
    reverse(bin1);
    reverse(bin2);
    
    // Perform binary addition
    for (int i = 0; i < maxLen; i++) {
        int digit1 = (i < len1) ? (bin1[i] - '0') : 0;
        int digit2 = (i < len2) ? (bin2[i] - '0') : 0;
        
        sum = digit1 + digit2 + carry;
        result[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    if (carry) {
        result[maxLen] = '1';
        result[maxLen + 1] = '\0';
    } else {
        result[maxLen] = '\0';
    }
    
    // Reverse result and restore original strings
    reverse(result);
    reverse(bin1);
    reverse(bin2);
    
    printf("\n%s + %s = %s\n", bin1, bin2, result);
    
    return 0;
}
