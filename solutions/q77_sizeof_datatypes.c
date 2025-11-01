#include <stdio.h>

int main() {
    printf("Size of basic data types in C:\n");
    printf("-------------------------------\n");
    printf("char:               %zu bytes\n", sizeof(char));
    printf("int:                %zu bytes\n", sizeof(int));
    printf("short int:          %zu bytes\n", sizeof(short int));
    printf("long int:           %zu bytes\n", sizeof(long int));
    printf("long long int:      %zu bytes\n", sizeof(long long int));
    printf("float:              %zu bytes\n", sizeof(float));
    printf("double:             %zu bytes\n", sizeof(double));
    printf("long double:        %zu bytes\n", sizeof(long double));
    printf("void * (pointer):   %zu bytes\n", sizeof(void *));
    
    return 0;
}

