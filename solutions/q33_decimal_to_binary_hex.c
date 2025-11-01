#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    int originalDecimal = decimal;
    
    if (decimal == 0) {
        printf("Binary: 0");
        return;
    }
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void decimalToHexadecimal(int decimal) {
    char hex[32];
    int i = 0;
    int remainder;
    
    if (decimal == 0) {
        printf("Hexadecimal: 0");
        return;
    }
    
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        decimal /= 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    decimalToBinary(decimal);
    printf("\n");
    decimalToHexadecimal(decimal);
    printf("\n");
    
    return 0;
}

